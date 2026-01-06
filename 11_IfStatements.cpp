#include <iostream>

int main() {
    //if statements = do something if a condition is true.
    //                if not, then don't do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Welcome to the site!";
    }

    else if (age < 0){
        std::cout << "You haven't been born yet!";
    }
    
    else if (age >= 100) {
        std::cout << "You are too old to enter the site";
    }
    // This part won't work because the age >= 18 will go instead.
    // Therefore if you want this part to have meaning u must put this in the first if statement.

    else {
        std::cout << "You are not old enough to enter!";
    }


    return 0;
}