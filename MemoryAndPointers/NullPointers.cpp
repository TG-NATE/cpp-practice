#include <iostream>

int main(){
    
    //null pointers are used to check if an address was assigned to a pointetr.
    //Becareful that code doesnt deference null or point to any free memory address.
    
    int *pointer = nullptr;

    int x = 123;
    pointer = &x;

    if(pointer == nullptr){ //Checking if pointer has a valid address or stil
        std::cout << "address was not assigned. Unsafe to dereferance \n";
    }else{
        std::cout << "Address was assigned\n";
        std::cout << "Address pointer address: " << *pointer << "\n"; 
    }


    return 0;
}