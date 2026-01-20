#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car car);
void printCar1(Car &car);
void paintCar(Car &car, std::string color);

int main() {

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    std::cout << &car1 << '\n';

    std::cout << '\n';
    printCar(car1);

    std::cout << '\n';

    printCar1(car1);

    /*
        0x5ffe20

        0x5ffe70
        Mustang
        2023
        red

        0x5ffe20
        Mustang
        2023
        red
    */

    std::cout << '\n';

    paintCar(car1, "silver");
    paintCar(car2, "gold");


    printCar1(car1);

    std::cout << '\n';

    printCar1(car2);





   
    return 0;   
}

void printCar(Car car){
    std::cout << &car << '\n'; // This shows that the arguement is passed by value rather than passed by reference
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void printCar1(Car &car) {          //  if needed to pass by reference 
    std::cout << &car << '\n'; 
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color){ // If we pass by value, it only creates a copy and changes 
                                            //the member of the copy so if we re-print the struct, nothing will have changed.
    car.color = color;
}