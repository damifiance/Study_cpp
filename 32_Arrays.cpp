#include <iostream>

int main() {

    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    cars[0] = "Camero";

    std::string cars1[3];

    cars1[0] = "Porsche";
    cars1[1] = "Bugatti";
    cars1[2] = "Mercedes";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n'; 
    
    std::cout << '\n';

    std::cout << cars1[0] << '\n';
    std::cout << cars1[1] << '\n';
    std::cout << cars1[2] << '\n'; 

    std::cout << '\n';

    double  prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';


    return 0;
}