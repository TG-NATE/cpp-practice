#include <iostream>

int main() {
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; // Delete pointer when no longer in use so memory doesn't link
    pNum = nullptr; //so pointer isnt just pointing a random location


    int size;

    std::cout << "How manu grades to enter in?";
    std::cin >> size;


    char *pGrades = NULL;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter Grade #" << i + 1 << '\n';
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete pGrades;
    pGrades = nullptr;

    return 0;
}