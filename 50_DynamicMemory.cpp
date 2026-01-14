#include <iostream>

int main() {
    // dynamic memory = Memory that is allocated after the
    //                  is already compiled & running
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especiall when accepting user input.

    int *pNum = NULL;

    pNum = new int; // Assigning the pointer to dynamic memory (heap instead of stack)

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; // We're freeing up the memory at this address IF U DON'T U MAY CAUSE A MEMORY LEAK.

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size]; // You don't have to pre-allocate the size of the array since you allocated to dynamic memory

    for(int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }

    delete pGrades;

    return 0;
}