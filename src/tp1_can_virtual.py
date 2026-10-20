
import can

# ECU moteur : interface virtuelle
ecu_motor = can.Bus(
    interface="virtual",
    channel="automotive_lab",
    receive_own_messages=False
)

# ECU IDS : deuxième interface sur le même bus virtuel
ecu_ids = can.Bus(
    interface="virtual",
    channel="automotive_lab",
    receive_own_messages=False
)

try:
    # 1. L'ECU moteur prépare un régime de 2500 RPM
    rpm = 3200

    # 2. Conversion du régime en deux octets
    data = rpm.to_bytes(2, byteorder="big")

    # 3. Création de la trame CAN
    message = can.Message(
        arbitration_id=0x100,
        is_extended_id=False,
        data=data
    )

    # 4. Transmission
    ecu_motor.send(message)
    print(f"[ECU MOTEUR] Trame envoyée : ID=0x100, RPM={rpm}")

    # 5. Réception par l'IDS
    received = ecu_ids.recv(timeout=2.0)

    if received is None:
        print("[IDS] Aucune trame reçue.")
    else:
        print(
            f"[IDS] ID=0x{received.arbitration_id:03X}, "
            f"DLC={received.dlc}, "
            f"DATA={received.data.hex(' ').upper()}"
        )

        # 6. Vérification et décodage
        if received.arbitration_id == 0x100 and received.dlc == 2:
            detected_rpm = int.from_bytes(
                received.data,
                byteorder="big"
            )
            print(f"[IDS] Régime décodé : {detected_rpm} RPM")
        else:
            print("[IDS] Trame inattendue.")

finally:
    # 7. Fermeture propre des interfaces
    ecu_motor.shutdown()
    ecu_ids.shutdown()
