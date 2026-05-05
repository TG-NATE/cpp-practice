#include <iostream>

void swap(std::string &x, std::string &y);

int main(){
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);
    std::cout << "X Adress in main: " << &x << "\n";
    std::cout << "X: " << x << "\n";
    std::cout << "Y Adress in main: " << &y << "\n";
    std::cout << "Y: " << y << "\n";


    return 0;
}

void swap(std::string &x, std::string &y){ // Passing by ref is pref.
    std::string temp = x;

    std::cout << "X Adress in swap: " << &x << "\n";
    x = y;

    std::cout << "Y Adress in swap: " << &y << "\n";
    y = temp;

}