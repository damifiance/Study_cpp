#include <iostream>

void printInfo(const std::string name, const int age);


int main() {
    // const parameter = a parameter that is effectively read-only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers

    std::string name = "Benjamin";
    int age = 19;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){
    // name = " "; WE CAN'T MODIFY IF WE SAID IT WAS A CONST.
    // age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}