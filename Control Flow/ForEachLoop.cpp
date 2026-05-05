#include <iostream>

int main(){
    std::string cars[] = {"Mustang", "camry", "rivian", "landcrusier"};

    for (std::string car:cars){

        std::cout << car << "\n";
    }
    

    return 0;
}