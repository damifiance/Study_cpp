#include <iostream>

int main() {
    //tenary operator ?: replacement to an if/else statement
    //condition ? expression1 : expression2;

    int grade = 75;

    if (grade > 60) {
        std::cout << "You Pass\n";
    }
    
    else {
        std::cout << "You Fail\n";
    }


    grade >= 60 ? std::cout << "You Pass\n" : std::cout << "You Fail\n";

    int number = 9;
    number % 2 == 1 ? std::cout <<"Odd\n" : std::cout << "Even\n";

    bool hungry = true;
    hungry ? std::cout << "You are hungry\n" : std::cout << "You are full\n";
    //since hungry is a boolean you don't have to put == true

    //this is also possible
    std::cout << (hungry ? "You are hungry" : "You are full");
    
    return 0;

}