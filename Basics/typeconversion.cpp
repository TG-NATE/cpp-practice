#include <iostream>

int main(){
    //Implicit type casting

    int x = 3.14; // this will save as 3 as it will be implicitly casted as an int
    std::cout << x << std::endl; 

    //Explicit type casting
    std::cout << (char) 100 << std::endl; // This will print out d as 100 is D in ascii

    return 0;
}