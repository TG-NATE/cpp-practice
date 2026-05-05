#include <iostream>

int main(){
    int temp;
    int conversion;
    char unit;

    std::cout << "What unit is your temp in? Acceptible entries: C or F \n";
    std::cin >> unit;

    unit == 'C' ? std::cout << "Converting from Celsius to Fahrenheit \n" : std::cout << "Converting from Fahrenheit to Celsius \n";

    std::cout << "What is the tempeurature \n";
    std::cin >> temp;
    
    switch (unit)
    {
    case 'C':
        conversion = (temp * 1.8) + 32;
        std::cout << temp << " degrees Celsius is " << conversion << " degrees Fahrenheit \n";
        break;
    
    default:
        conversion = (temp - 32) * 5/9;
        std::cout << temp << " degrees Fahrenheit is " << conversion << " degrees Celsius \n";
        break;
    }
    
}