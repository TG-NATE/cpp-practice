#include <iostream>

int main(){
    std::string name;
    std::string fullName;
    int age;

    std::cout << "What's your name?: ";
    std::cin >> name;

    //reading sting that could contain white spaces
    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, fullName); //getLine gets the whitespaces. std::ws clears newline


    std::cout << "What's your age?: ";
    std::cin >> age; //getLine gets the whitespaces




}