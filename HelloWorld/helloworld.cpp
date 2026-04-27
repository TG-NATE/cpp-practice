#include <iostream>

int main(){ //all C++ programs must have a main func. 
    std::cout << "Hello, World!" << std::endl; //standard charcter output << "string" << standard endline.

    /*
        standard charcter output << "string" << new line character. 
        \n is more effecient but doesnt clear output buffer.
    */
    std::cout << "Hello, Moon" << '\n';

    int x; //declaring int var x.
    x = 5; //assignment of the value 5

    int y = 6; //declaration and assignment of int var y.

    int sum = x + y;

    std::cout << "Sum: " << sum << std::endl;

    /* Var Types: */
    
    //int - whole numble
        int age = 30;

    //Doubles - decimal numbers
        double div = 4.0/2.0;

    //char - single charcater
        char grade = 'A';
    
    //bool - T or F
        bool isTheSunOut = true;

    //string - list of characters
        std::string name = "123 John So boulevard";

    //Const - variables that can't be changed after assignment. Uppercase naming convention.,
        const double PI = 3.14159;

    return 0; //returning 0 indicates the end of the program. 
}