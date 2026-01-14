// function templates = describes what a function looks like.
//                      Can be used to generate as many overloaded functions
//                      as needed, each using different data types


#include <iostream>

int max1(int x, int y) {
    return (x > y) ? x : y;
}
double max1(double x, double y) {
    return (x > y) ? x : y;
}
char max1(char x, char y) {
    return (x > y) ? x : y;
}

template <typename T, typename U>
auto max(T x, U y) {
    return (x > y) ? x:y;
}
//the auto will decide what data type to print out



int main() {

    std::cout << max1(1,2) << '\n';
    std::cout << max1(1.1,2.1) << '\n';
    std::cout << max1('a','b') << '\n';

    std::cout << max(1,2) << '\n';
    std::cout << max(1.1,2.1) << '\n';
    std::cout << max('a','c') << '\n';

    // std::cout << max(1,2.1) << '\n'; 
    // Two different data types won't work if we use
    // T max(T x, T y)
    
    
    // That's why we need
    // auto max(T x, U y)
    // after setting another typename U



    return 0;
}