#include <iostream>

int main() {
    //& address of
    //* dereference operator

    std::string name = "Kevin";
    int age = 21;
    std::string freePizza[5] = {"P1", "P2", "P3", "P4", "P5"};

    std::string *pName = &name;
    int *pAge = &age;

    std::cout << *pName << "\n";
    std::cout << *pAge << "\n";

    //Arrays are already memeory address so it doesnt need to be dereferanced.
    std::cout << *freePizza << "\n";

    return 0;
}