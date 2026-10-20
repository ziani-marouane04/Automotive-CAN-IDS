#include <cstdint>
#include <iostream>

struct CanFrame{
std::uint16_t id;
std::uint8_t dlc;
std::uint8_t data[8]; 

};

int main(){
CanFrame frame{};
frame.id =  0x120;
frame.dlc = 1;
frame.data[0] = 0x0c;
frame.data[1] = 0x90;

std::cout<<"CAN ID : 0x"<< std::hex << frame.id << '\n';
std::cout << std::dec<< "DLC : " << static_cast<int>(frame.dlc)<< '\n';
std::cout<< std::hex<< static_cast<int>(frame.data[0]) << ' '<< static_cast<int>(frame.data[1])<< '\n';
return 0;
}