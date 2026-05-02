#include <iostream>
#include <ctime>

int main(){
    bool cont;
    char ans;
    int randomNumber;

    srand(time(NULL));
    randomNumber = (rand() % 5) + 1;

    do
    {
        switch (randomNumber)
        {
        case 1:
            std::cout << "You fell in a pit of alligators\n";
            break;

        case 2:
            std::cout << "Look a Hoard of zombies\n";
            break;

        case 3:
            std::cout << "You died as a result of not being able to name 2 BIA songs :(\n";
            break;
        
        default:
            std::cout << "You've arrived at a safe house.\nHere's a health kit\n";
            break;
        }

        std::cout << "The random number was: " << randomNumber << "\n";

        std::cout << "Would you like to generate a new event? (Y or N) *case sensitive* \n";
        std::cin >> ans;

        randomNumber = (rand() % 10)+ 1;

        ans == 'Y' ? cont = true : cont = false;


    } while (cont == true);
    



    return 0;
}