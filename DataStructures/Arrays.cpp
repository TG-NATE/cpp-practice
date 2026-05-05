#include <iostream>

int main(){
    std::string car[] = {"Mustang", "camry", "rivian"};

    for (int i = 0; i < sizeof(car)/sizeof(car[0]); i++){

        std::cout << car[i] << "\n";
    }
    

    return 0;
}