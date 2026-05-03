#include <iostream>

//User functions must be defined or declared before main function
void HappyBirthdayMessage(std::string name, int age);

double square(double length);
double vol(double length, double widith, double height);
std::string concatName(std::string fname, std::string lname);

int main(){
    HappyBirthdayMessage("Kevin", 25);

    std::cout << "Area of a sq: " << square(5) << "\n";

    std::cout << "Volume: " << vol(5, 5, 5) << "\n";

    std::cout << "concated name: " << concatName("Kevin", "James") << "\n";
}

void HappyBirthdayMessage(std::string name, int age){
    std::cout << "Happy Birthday " << name << "\n";
    std::cout << "You are now " << age << " years old\n";
}

double square(double length){
    return length * length;
}

double vol(double length, double widith, double height){
    return length * widith * height;
}

std::string concatName(std::string fname, std::string lname){
    return fname + " " + lname;
}

//Functions that return values