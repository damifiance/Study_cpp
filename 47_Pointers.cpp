#include <iostream>

int main() {
    // ponters = variable that stores a memory address of another variable
    //           sometimes it's easier to work with an address


    // & address-of operator
    // * dereference operator

    std::string name = "Benjamin";
    int age = 19;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};



    std::string *pName = &name;
    int *pAge = &age;
    // std::string *pFreePizzas = freePizzas;
    // My array is already an address therfore I don't need to use the address of operator

    std::cout << pName <<'\n'; 
    std::cout << *pName <<'\n';

    std::cout << freePizzas <<'\n'; // already an address
    std::cout << *freePizzas << '\n'; // gives the first value in the array;
    
    std::cout << pAge <<'\n';
    std::cout << *pAge <<'\n';

    return 0;
}