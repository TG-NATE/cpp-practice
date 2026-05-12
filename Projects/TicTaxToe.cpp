#include<iostream>
#include<ctime>



void drawBoard(char *spaces);
void clearBoard(char *spaces);
void playerMove(char *spaces, char player);
void computaMove(char *spaces, char computa);
bool checkWinner(char *spaces, char player, char computa, int &playerWins, int &computaWins);
bool checkTie(char *spaces, int &ties);


int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computa = 'O';
    int playerWins = 0;
    int computaWins = 0;
    int ties = 0;
    bool running = true;
    bool anotherRound = true;
    std::string anotherRoundChoice = "T";

    do
    {
        drawBoard(spaces);

        do
        {
            playerMove(spaces, player);
            drawBoard(spaces);

            if (!checkWinner(spaces, player, computa, playerWins, computaWins)|| !checkTie(spaces, ties))
            {
                clearBoard(spaces);
                running = false;
                break;
            }
            

            computaMove(spaces, computa);
            drawBoard(spaces);

        
            if (!checkWinner(spaces, player, computa, playerWins, computaWins)|| !checkTie(spaces, ties))
            {
                clearBoard(spaces);
                running = false;
                break;
            }

        


        } while (running == true);

        std::cout << "Player Wins: "<< playerWins << " Computa Wins: "<< computaWins << " Ties: "<< ties << "\n";

        std::cout << "Do you want to play again? (Y)es (N)o \n";
        std::cin >> anotherRoundChoice;
        toupper(anotherRoundChoice.at(0)) == 'Y' ? anotherRound = true, running = true : anotherRound = false;


    }while (anotherRound == true);
    
    return 0;
}

void drawBoard(char *spaces){
    std::cout << "******Tic-Tax-Toe******\n";
    std::cout << "   " << spaces[0] << "   |   " << spaces[1] << "   |   " << spaces[2] << "   \n";
    std::cout << "-------|-------|-------\n";
    std::cout << "   " << spaces[3] << "   |   " << spaces[4] << "   |   " << spaces[5] << "   \n";
    std::cout << "-------|-------|-------\n";
    std::cout << "   " << spaces[6] << "   |   " << spaces[7] << "   |   " << spaces[8] << "   \n";
    std::cout << "***********************\n";
}

void clearBoard(char *spaces){
    for(int i = 0; i < 9; i++){
        spaces[i] = ' ';
    }
}
    
void playerMove(char *spaces, char player){
    char playerMove = ' ';
    bool avalibleMove = false;


    while (!avalibleMove)
    {
        std::cout << "Enter Space (1-9): ";
        std::cin >> playerMove;

        // std::cout << "Player selected: " << (playerMove - '0') - 1 << "\n";
        // std::cout << "Spot Status: " << spaces[(playerMove - '0') - 1] << "\n";

        if(playerMove > '9' || playerMove < '1'){
            std::cout << "Invalid spot\n";
            continue;
        }
        
        if (spaces[(playerMove - '0') - 1] != ' '){
            std::cout << "That spot isn't free. Try again\n";
            continue;
        }
        

        spaces[(playerMove - '0')  - 1] = player;
        avalibleMove = true;
    }
    


}

void computaMove(char *spaces, char computa){
    srand(time(NULL));
    bool avalibleMove = false;
     int computaChoice;

    while (!avalibleMove) {
        computaChoice = rand() % 9;

        if(spaces[computaChoice] != ' '){
            continue;
        }

        spaces[computaChoice] = computa;
        avalibleMove = true;
        
    }   

}

bool checkWinner(char *spaces, char player, char computa, int &playerWins, int &computaWins){
    char winner = ' ';

    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        winner = spaces[0];
    }else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        winner = spaces[0];
    }else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        winner = spaces[0];
    }else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        winner = spaces[4];
    }else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        winner = spaces[7];
    }else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        winner = spaces[1];
    }else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        winner = spaces[2];
    }else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        winner = spaces[2];
    }
    
    if(winner == player){
        std::cout << "You Won!\n";
        playerWins++;
        return false;
    }else if(winner == computa){
        std::cout << "Computa Won!\n";
        computaWins++;
        return false;
    }else{
        return true;
    }
}


bool checkTie(char *spaces, int &ties){

    for(int i = 0; i < 9; i++){
        if (spaces[i] == ' ')
        {
            std::cout << "empty space found at: " << i << "\n";
            return true;
        }
    }

    std::cout << "There's a Tie \n";
    ties++;
    return false;
}
