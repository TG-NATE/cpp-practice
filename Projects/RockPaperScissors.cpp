#include<iostream>
#include<cmath>

char getUsersChoice();
char getComputaChoice();
char showChoices(char choice);
std::string determineWinner(char player, char computa);

int main(){

    char cont;
    srand(time(0));

    do{
        std::cout << "What's your choice \nRock (R), Paper (P), or Scissor (S) \n";
        char player = getUsersChoice();

        std::cout << "Computa is Thinking\n";
        char computa = getComputaChoice();
        
        std::cout << "You selected " << showChoices(player) << " & The Computa selected " << showChoices(computa) << "\n";
        std::cout << determineWinner(player, computa);

        std::cout << "Would you like to play again? (Y or N)\n";
        std::cin >> cont;
    
    }while (cont != 'N');
    
    return 0;
}

char getUsersChoice(){
    std::string pChoice;
    std::cin >> pChoice;
    return pChoice.at(0);
}

char getComputaChoice(){
    char cChoice;

    switch ((rand() % 3) + 1)
    {
    case 3:
        cChoice = 'R';
        break;
    case 2:
        cChoice = 'S';
        break;
    
    default:
        cChoice = 'P';
        break;
    }

    return cChoice;
    
}


char showChoices(char choice){
    return choice;
}

std::string determineWinner(char player, char computa){
    if (player == computa)
    {
        return "Its a tie\n";
    } 
    else if (player == 'P' && computa == 'R' || player == 'S' && computa == 'P' || player == 'R' && computa == 'S'){
        return "Player Wins\n";
    }else{
        return "Computa Wins\n";
    }
    

}


