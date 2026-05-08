# C++ Practice/Review

### 4-26-26 (Hello World & The Basics)
    - C Basic Strcture
        + Include standard lib
        + Main function
        + Returning zero at the end of the function

    - Printing to console
        + std::cout

    - Variable Declaration & Types
        + Declaration V. Declaration and Assignment
        + Basic Types

    - Type Conversion
        + Implict vs Explicit

    - User Input
        + std::cin >> variable_name
        + std::getline(std::cin >> std::ws, variable_name); //getLine gets the whitespaces. std::ws clears newline

    - Namespaces (assigning different values to a variable with the samenames in different namespaces)
        + Refer to a specific namespace **namespace_name:variable_name**
        + Can change the defult namespace with the *using* Key

    - Type Def
        + typedef std::string text_t;

### 4-27-26 (Hypotense Calculator, If, Switch)
    - Hypotense Calculator
        + cmath Sqrt and Pow func
        + double var
        + user input

    - If case
        + If, If else, else

    - Switch case
        + Cases and Default case

### 4-28-26 (Operations Calculator)
    - Calculator to do basic math operations (- + * /)

### 5-2-26 (More Control Flow & Random event generation)
    - Useful String Methods
        + .length() returns length
        + .empty()  returns bool
        + .clear()  clears a string
        + .append(<String to append>) Appends a string to a string
        + .at(<index>) returns char in string at sepcified index
        + .insert(<Index>, <String>) inserts string a specfifc index
        + .find(<char>) finds index of char
        + .erase(<beginning index>, <end index>) erase string from beginning index to end index. not incluse of end index

    - While Loop: Loops code until the condition is met

    - Do While Loop: Runs code in loop once, then checks condition. If the condition is not met then the continues on until the condition is met

    - For Loop: loops based on assigned increment. 

    - break keyword: breaks from code

    - continue keyword: skips an iteration

    - Loops can be nested. useful to move through rows and and columns

    - Generating Random Numbers *close enough to random numbers*

    - Random event generation project
        + Use random numbers to determine an in Game event
            ~ Ternary Operator
            ~ Switch
            ~ Do While
            ~ Random Numbers

### 5-3-26 (Number Guess | User Defined Functions | Rock Paper Scissors)
    - Random Number Guess
    - Functions
        + Must be Declared or Defined before the main function
        + Overloaded Functions: Function that share the same name with different parameters each.
        + return keyword: Used to return value from a type defined function
    - Local V Global Variables
        + Local Var: Variables defined within a fucntion to be accessed within the function. (Preffered as less thingds can change it)
        + Global Var: Variables defined outside the function be accessed to the scope levels below.
    - Rock Paper Scissors
    - Arrays
        + Can be passed to a function (Size will need to be passed as well)
    - For Each Loop
    - Bubblesort

### 5-4-26 (Quiz Game | Temperature conversion | Ternary Operator | Memory address & Pointers)
    - Quiz Game
        + Multi Dimensional Array
    - &: Used to refer to memory address of a Var
    - By Value vs By Reference
    - Const Parameter
        + Conveys intent and keep parameters secure in function

### 5-7-26 (Luhn's Algorithm Implementation (isCardValid))
    - Implemented for Valid Visa, AMEX, Discover, & Dinner's Club Cards
    - Personal Reminders
        + Must subtract '0' from string.at(n value) to convert number char to int
    - Most Invalid cases are corrected 

        









