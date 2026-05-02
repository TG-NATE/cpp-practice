#include <iostream>

int main(){
    std::string name;

    while (name.empty() == true)
    {
        std::cout << "Enter your name";
        std::getline(std::cin, name);
    }

    std::cout << "Thank you";

    
}