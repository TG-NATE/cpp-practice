#include <iostream>

std::string testCards[] = {

    // ---------------- VALID CARD NUMBERS ----------------

    // Visa
    "4111111111111111",
    "4012888888881881",

    // MasterCard
    "5555555555554444",
    "5105105105105100",

    // American Express
    "378282246310005",
    "371449635398431",

    // Discover
    "6011111111111117",
    "6011000990139424",

    // JCB
    "3530111333300000",
    "3566002020360505",

    // Diners Club
    "30569309025904",
    "38520000023237"

    // // ---------------- INVALID CARD NUMBERS ----------------

    // // One digit changed from valid numbers
    // "4111111111111112",
    // "5555555555554445",
    // "378282246310006",
    // "6011111111111118",

    // // Random invalid lengths
    // "1234567890123456",
    // "9999999999999999",
    // "1111111111111111",

    // // Too short
    // "411111111111",

    // // Too long
    // "41111111111111111111"

    // // // Edge-ish cases
    // // "0000000000000000",
    // // "2222222222222222"
};

bool expectedResults[] = {

    // ---------------- VALID CARD NUMBERS ----------------

    // Visa
    true,
    true,

    // MasterCard
    true,
    true,

    // American Express
    true,
    true,

    // Discover
    true,
    true,

    // JCB
    true,
    true,

    // Diners Club
    true,
    true

    // ---------------- INVALID CARD NUMBERS ----------------

    // // One digit changed from valid numbers
    // false,
    // false,
    // false,
    // false,

    // // Random invalid numbers / patterns
    // false,
    // false,
    // false,

    // // Too short
    // false,

    // // Too long
    // false
};

bool isCardValid(std::string cardNumber);
int doubleDigit(int digit);

int main(){

    int testCardArraySize = sizeof(testCards)/sizeof(testCards[0]);



    for(int i = 0; i < testCardArraySize; i++){
        std::cout << "************* Card: " << testCards[i] << " *****************\n";

        if (testCards[i].size() > 12 && testCards[i].size() < 20)
        {    
            if(isCardValid(testCards[i]) == expectedResults[i]){
                std::cout << "This card is valid ✅" <<  "\n";
                std::cout << "******************************************************\n \n";
            }else{
                std::cout << "Card is not valid ⛔️" <<  "\n"; 
                std::cout << "******************************************************\n \n"; 
            }

        }else{
            std::cout << "Card is not valid ⛔️" <<  "\n";
            std::cout << "******************************************************\n \n";
        }
        
    }
}


bool isCardValid(std::string cardNumber){
    int checkSum = 0;
    bool isDoubled = false;

    for(int i = cardNumber.size() - 1; i >= 0; i--){

        //std::cout << "Card index: " << i + 1 << "\n";
        //std::cout << "\t Card Digit: " << cardNumber.at(i) - '0' << "\n";
        int doubledDigit = doubleDigit(cardNumber.at(i) - '0');

        if (isDoubled == true)
        {
            //std::cout << "\t Doubled Number " << doubledDigit << " \n";

            if (doubledDigit > 9)
            {
                //std::cout << "\t (Doubled Number bigger than 9) / 10 to get tens place " << (doubledDigit / 10) << " \n";
                //std::cout << "\t (Doubled Number bigger than 9) & 10 to get the ones place " << (doubledDigit % 10) << " \n";
                checkSum = checkSum + ((doubledDigit / 10) + (doubledDigit % 10));

                //std::cout << "\t Checksum value at index  " << i + 1 << " of 2 dig even number: " << checkSum << " \n";
                
            }else{
                checkSum = checkSum + (doubledDigit);

                //std::cout << "\t Checksum value at index " << i + 1 << " of 1 dig even number: " << checkSum << " \n";
            }

            isDoubled = false;
        
        
        }else{
            checkSum = checkSum + (cardNumber.at(i) - '0');
            //std::cout << "\t Checksum value at index  " << i + 1 << " odd number: " << checkSum << " \n";
            isDoubled = true;
           
        }
    }

    if (checkSum % 10 == 0)
    {
        return true;
    }
    

    return false;
}

int doubleDigit(int digit){
    return digit * 2;
}