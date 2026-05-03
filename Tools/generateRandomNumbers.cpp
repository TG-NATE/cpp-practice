#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL)); //passing a seed to srand. Devs typically use current date/time

    int num = (rand() % 6) + 1; //(rand() % <end_of_range>) + 1 to capture full range
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    return 0;
}

