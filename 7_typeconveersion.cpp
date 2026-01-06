/*
    type conversion
        conversion a value of one data type to another
        Implicit = automatic
        Explicit = Precede value with new data type (int)
*/

#include <iostream>

int main(){

    int x = 3.14; //implicit

    int y = (double) 3.14; // this code means that I transform 3.14 into a double variable and 
                           //I save it into a integer varialble y. (NOT THE OTHER WAY AROUND)

    double z = (int) 3.14;

    char m = 100;

    std::cout << x << y << z << '\n';
    std::cout << m << '\n';
    std::cout << (char)100 << '\n'; //explicitly

    //Ex
    int correct = 8;
    int questions = 10;
    double score = correct / questions * 100;

    std::cout << score << '%' << '\n'; 

    /*
        Why does this print out zero? 
        ==> correct and questions are both integer data types.
            Therefore when we divide those two, it is truncated and we get 0 * 100 = 0.
    */ 

    //What we should do
    double score1 = (double) correct / (double) questions * 100;
    std::cout << score1 << '\n';

    //or
    std::cout << (double)correct / (double) questions * 100;

    return 0;
}