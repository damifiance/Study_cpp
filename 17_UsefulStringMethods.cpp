#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //name.length()

        // if(name.length() > 20) {
        //     std::cout << "Your name can't be over 20 characters long";
        // }

        // else {
        //     std::cout << "Welcome " << name;
        // }

    //name.empty() : check if the string is empty

        // if(name.empty()){
        //     std::cout << "You didn't enter your name";
        // }

        // else{
        //     std::cout << "Hello " << name;
        // }


    //name.clear() : clears whatever is in the string

        // name.clear();
        // std::cout << "Hello " << name;

    //name.append() : adds whatever is in the () to the string

        // name.append("@gmail.com");
        // std::cout << "Your username is now " << name;

    // name.at(n) prints out the nth index (0 is the first index)

        // std::cout << name.at(2);

    // name.insert(n, m)    
        // name.insert(0, "@");
        // std::cout << name;

    // name.find()
        // std::cout << name.find(' ');

    // name.erase(n ,m) : erases m characters from the nth index 
    name.erase(0, 8);
    std::cout << name;


    return 0;
}