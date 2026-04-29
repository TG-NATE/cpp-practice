#include <iostream>
#include <cmath>

int main(){
     char op;
     double num1;
     double num2;
     double result;

     std::cout << "**************** Calculator ****************\n";

     std::cout << "Enter an Operator (+ - / *): ";
     std::cin >> op;

     std::cout << "Enter num 1: ";
     std::cin >> num1;

     std::cout << "Enter num 2: ";
     std::cin >> num2;

     if(num2 == 0 && op == '/'){
        std::cout << "You cannot divide by zero \n";
     }else{
        switch(op) {
            case '+':
                std::cout << num1 + num2 << "\n";
            break;

            case '-':
                std::cout << num1 - num2 << "\n";
            break;

            case '*':
                std::cout << num1 * num2 << "\n";
            break;

            case '/':
                std::cout << num1 / num2 << "\n";
            break;

            default:
                std::cout << "You're cooked croodie" << "\n";
            break;
        } 
     }
    


     std::cout << "******************************************** ";


}