#include <iostream>

int main(){
    std::string questions[4] = {"1. Can we see both sides of the moon?", "2. What time zone is New York City in?", 
                                "3. What's the capital of Wisconsin", "4. Where is Mount Rainier located?"};

    std::string options[][5] = {{"A. Yes", "B. No", "C. Maybe", "D. Chat am I cooked", "E. On every 3rd Thursday"}, 
                                {"A. CST", "B. MST", "C. EST", "D. Kangaroo Time"}, 
                                {"A. Door County", "B. Madison", "C. Green Bay", "D. Milwaukee"}, 
                                {"A. Oregon", "B. Washington State", "C. California", "D. Japan"}};

    char answerKey[4] = {'B', 'C', 'B', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);

    char guess;

    int score = 0;

    std::cout << size << "\n";

    for(int i = 0; i < size; i++){
        std::cout << "********* Question " << i + 1 << ". *********************\n";
        std::cout << questions[i] << "\n";
        std::cout << "*******************************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){ //sizeof(options[i])/sizeof(options[i][0]) size of list of options at i set of options
            std::cout << "\t" << options[i][j] << "\n";
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct \n";
            score++;
        }else{
            std::cout << "Incorrect \n";
        }

    } 

    switch (score)
    {
    case 4:
        std::cout << "Winner Winner \n";
        break;
    
    case 2:
    case 3:
        std::cout << "Try Harder \n";
        break;
    
    default:
        std::cout << "You're Cooked \n";
        break;
    }

}