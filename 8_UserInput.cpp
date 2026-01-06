#include <iostream>
#include <string>


// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    // std::cout << "What's your name?: ";
    // std::cin >> name;

    // std::cout << "WHat's your age?: ";
    // std::cin >> age;

    // std::cout << "Hello " << name << '\n';
    // std::cout << "You are " << age << " years old";


    std::cout << "What's your full name?: ";
    std::getline(std::cin, name); // for getting lines, but to use this u shouldn't have a std::cin before this
    
    //if you need to use std::cin befor this, you can change the code like the following
    
    std::getline(std::cin >> std::ws, name); // the >> std::ws removes any WhiteSpaces before that

    std::cout << "Hello " << name;

    return 0;
}