#include <iostream>

bool valid(int rpm , int temp){
return rpm>=0 && rpm<= 4000 && temp>= -40 && temp<= 150 ;
}

int main(){
int rpm = 3200;
int temp = 200;
if(valid(rpm,temp)){
	std::cout<<"Donnees valides" << '\n';
}
else {
        std::cout << "Anomalie detectee" << '\n';

}
return 0;
}