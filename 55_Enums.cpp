#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

enum Flavor {vanilla, chocolate, strawberry, mint}; 

//  If I don't assign the integers, 0 ~ n will be automatically designated.


int main() {

    // enums = a user-defined data type that consists
    //         of paired named-integer constants.
    //         GREAT if you have a set of potential options


    // std::string today = "sunday";
    Day today = sunday;

    // switch(today) {
    //     case "sunday":  std::cout << "It is Sunday!\n";
    //                     break;
    //     case "monday":  std::cout << "It is Monday!\n";
    //                     break;
    //     case "tuesday":  std::cout << "It is Tuesday!\n";
    //                     break;
    //     case "wednesday":  std::cout << "It is Wednesday!\n";
    //                     break;
    //     case "thursday":  std::cout << "It is Thursday!\n";
    //                     break;
    //     case "friday":  std::cout << "It is Friday!\n";
    //                     break;
    //     case "saturday":  std::cout << "It is Saturday!\n";
    //                     break;
    // }

    // This wouldn't work because switch feature only works for integers

    switch(today) {
        case sunday:  std::cout << "It is Sunday!\n";
                        break;
        case monday:  std::cout << "It is Monday!\n";
                        break;
        case tuesday:  std::cout << "It is Tuesday!\n";
                        break;
        case wednesday:  std::cout << "It is Wednesday!\n";
                        break;
        case thursday:  std::cout << "It is Thursday!\n";
                        break;
        case friday:  std::cout << "It is Friday!\n";
                        break;
        case saturday:  std::cout << "It is Saturday!\n";
                        break;
    }

    return 0;
}