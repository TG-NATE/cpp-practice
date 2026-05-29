#include<iostream>
int factorial(int number);

int main(){

    std::cout << factorial(3) << '\n';


    return 0;
}

int factorial(int number){ //Calling same function within function to break into smaller problem. A base case when recursion ends continue case that calls the function again
    if(number > 1){
        return number * factorial(number - 1);
    }else{
        return number;
    }
}