#include <iostream>

void swap(std::string &x, std::string &y);    

int main() {
    
    std::string x = "Kool-Aid";
    std::string y = "Water";

    // std::string temp;

    // temp = x;
    // x = y;
    // y = temp;


    swap(x,y); // This would only "pass by value" => meaning it sends a copy => not being able to manipulate the og variables
               // We need to switch the void swap function from std::string x to std::string &x
               // This would be p"ass by reference".

    std::cout << "X: "<< x << '\n';
    std::cout << "Y: "<< y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}