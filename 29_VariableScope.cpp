#include <iostream>

int myNum = 3; //It's best to avoid global variables because it polutes the global namespace
                // ALSO it's because functions can't see inside other functions
                // so you can overwrite variables without any problems without having any namespace problems
                // If there is a local variable with the same name as the global variable inside a function, the function will use the local variable
                // IF you want to use the global variable, u use the scope resolution operator(::).

// void printNum(){
//     std::cout << myNum;
// }

// This won't work because the variable myNum is a Local Variable inside the main function!

void printNum2(){
    int myNum = 2; //Local variables can have different values with the same name if it is in different functions
    std::cout << myNum <<"\n";
    std::cout << ::myNum<<"\n"; //!!THE SCOPE RESOLUTION OPERATOR!!
}

int main() {
    // Local variables = declared inside a function of block {}
    // Global variables = declared outside of all functions

    int myNum = 1;

    std::cout << myNum <<"\n";

    // printNum();

    printNum2();

    std::cout << myNum<<"\n";
    std::cout << ::myNum <<"\n";

    return 0;
}