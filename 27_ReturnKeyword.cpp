#include <iostream>

double area(double a, double b) {
    double S = a * b;
    return S;
}

double volume(double a){
    return a*a*a;
}

std::string concateStrings(std::string a, std::string b) {

    std::string name = a + ' ' + b;
    return name;

}

int main() {
    // return = return a value back to the spot
    //          where you called the encompassing function

    double height;
    double width;

    double length;

    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    std::cout << "The area of the rectangle is " << area(height, width) <<"!\n";

    std::cout << "Enter the edge length of the cube: ";
    std::cin >> length;

    std::cout << "The volume of the cube is " << volume(length) <<"!\n";

    std::string firstname;
    std::string lastname;

    std::cout << "Enter your first name: ";
    std::cin >> firstname;

    std::cout << "Enter your last name: ";
    std::cin >> lastname;

    std::cout << "Hello " << concateStrings(firstname, lastname) <<"!!!\n";

    return 0;
}