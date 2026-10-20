#include <iostream>

int main (){

	int rpm = 5000;
	
	if (rpm <= 0){
		std::cout<<"Valeur invalide" << '\n';
	}
	else if (rpm >= 4000){
		std::cout<<"Regime suspect" << '\n';
	}
	else{
		std::cout<<"Regime normal" << '\n' ;
	}
    return 0;

}