#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    if (age >= 100){
        std::cout << "You're too old grandpa";
    }
    else if(age >= 18){
        std::cout << "Welcome to the site!";
    }
    else if(age <= 0){
        std::cout << "You haven't been born yet";
    }
    else{
        std::cout << "You aren't allowed";
    }
    return 0;
}