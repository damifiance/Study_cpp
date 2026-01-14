// recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into repeatable single steps

    // (iterative vs recursive)

    // advantages = less code and its cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower


#include <iostream>

void walk(int steps);
void walkR(int steps);
int factorial(int num);
int factorialR(int num);
int main() {
    
    walk(10);
    std::cout << '\n';
    walkR(10);
    std::cout << '\n';

    std::cout << factorial(6) << '\n';

    std::cout <<'\n';

    std::cout << factorialR(6);

    return 0;
}

void walk(int steps) {
    for (int i=0; i < steps; i++) {
        std::cout << "You take a step\n";
    }
}

void walkR(int steps) {
    if (steps > 0) {
        std::cout << "You take a step\n";
        walkR(steps-1);
    }
}

int factorial(int num) {
    int result = 1;
    for (int i = num; i >=1; i--){
        result = i * result;
    }

    return result;
}


int factorialR(int num) {
    if (num > 1) {
        return num * factorialR(num-1);
    }
    else if(num == 1 || num == 0) {
        return 1;
    }
    else {
        return 0;
    }
}