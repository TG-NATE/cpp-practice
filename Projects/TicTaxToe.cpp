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

        running = checkWinner(spaces, player, computa);

        if (running == false)
        {
            break;
        }
        

        computaMove(spaces, computa);
        drawBoard(spaces);

        running = checkWinner(spaces, player, computa);
        
        

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
    char winner;

    if(spaces[0] == player && spaces[1] == player && spaces[2] == player || spaces[0] == computa && spaces[1] == computa && spaces[2] == computa)
    {
        winner = spaces[0];
    }else if (spaces[0] == player && spaces[4] == player && spaces[8] == player || spaces[0] == computa && spaces[4] == computa && spaces[8] == computa)
    {
        winner = spaces[0];
    }else if (spaces[0] == player && spaces[3] == player && spaces[6] == player || spaces[0] == computa && spaces[3] == computa && spaces[6] == computa)
    {
        winner = spaces[0];
    }else if (spaces[3] == player && spaces[4] == player && spaces[5] == player || spaces[3] == computa && spaces[4] == computa && spaces[5] == computa)
    {
        winner = spaces[4];
    }else if (spaces[6] == player && spaces[7] == player && spaces[8] == player || spaces[6] == computa && spaces[7] == computa && spaces[8] == computa)
    {
        winner = spaces[7];
    }else if (spaces[1] == player && spaces[4] == player && spaces[7] == player || spaces[1] == computa && spaces[4] == computa && spaces[7] == computa)
    {
        winner = spaces[1];
    }else if (spaces[2] == player && spaces[5] == player && spaces[8] == player || spaces[2] == computa && spaces[5] == computa && spaces[8] == computa)
    {
        winner = spaces[2];
    }
    
    if(winner == player){
        std::cout << "You Won!\n";
        return 0;
    }else if(winner == computa){
        std::cout << "Computa Won!\n";
        return 0;
    }else{
        return 1;
    }
}


bool checkTie(char *spaces){

    for(int i = 0; i < 10; i++){

        if (spaces[i] == ' ')
        {
            return 1;
        }
        

    }

    std::cout << "There's a Tie\n"; 
    return 0;
}
