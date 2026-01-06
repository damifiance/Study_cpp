#include <iostream>

int main(){

    int x; //declaration
    x = 5; //assignment

    int y = 6; //declaration and assignment simultaneously.
    
    int sum = x + y;


    //interger (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5; //if I print this --> decimal .5 will be truncated so that days is interger 7

    std::cout << x <<'\n';
    std::cout << y <<'\n';
    std::cout << sum <<'\n';
    std::cout << days <<'\n';
    
    //double (number including decimal)
    double price = 10.99;
    double GPA = 2.5;
    double temperature = 25.1;

    std::cout << price <<'\n';

    //char (single character)
    char grade = 'A';
    char initial = 'B'; //If I try to save 'BC' in initial which is a char variable, I get overflow

    std::cout << initial << '\n';

    //boolean (true or false)
    bool student = true;
    bool light_switch = false;
    bool power = true;
    bool forSale = false;

    //string (objects that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << name <<'\n';
    std::cout << "Hello " << name <<'\n';
    std::cout << "You are " <<age << " years old";

    return 0;
}