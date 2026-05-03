#include <iostream>
#include <cmath>

int main(){
    srand(time(0));
    bool cont;
    char rUDon;
    int guess;
    int randomNumber = (rand() % 10) + 1; 

   do
   {
    std::cout << "Guess a random number better 0 and 10 \n";
    std::cin >> guess;

    guess == randomNumber ? std::cout << "The number was " << randomNumber << ". You are Correct\n" : std::cout << "The number was " << randomNumber << ". You are incorrect\n";

    std::cout << "Another Round (Y or N)\n";
    std::cin >> rUDon;

    rUDon == 'Y' ? cont = true : cont = false;

    randomNumber = (rand() % 10) + 1; 

   } while (cont == true);
   
    


    
    
    return 0;
}