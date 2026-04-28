#include <iostream>

int main(){
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month){
    case 11:
        std::cout << "It's Nov" << std::endl;
        break;
    case 10:
        std::cout << "It's the best month... October" << std::endl;
        break;
    default:
        std::cout << "BOOOO TOMATO";
        break;
    }

    return 0;
}