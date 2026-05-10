#include<iostream>
#include<ctime>



void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computaMove(char *spaces, char computa);
bool checkWinner(char *spaces, char player, char computa);
bool checkTie(char *spaces);


int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computa = 'O';
    bool running = true;

    drawBoard(spaces);

    do
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        computaMove(spaces, computa);
        drawBoard(spaces);
        

    } while (running == true);
    

    

    
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

bool checkWinner(char *spaces, char player, char computa){

    return 0;
}
bool checkTie(char *spaces){
    
    return 0;
}
