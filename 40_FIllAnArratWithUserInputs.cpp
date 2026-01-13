#include <iostream>

int main() {
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i=0;i<size;i++){
        std::cout << "Enter a food you like #" << i+1 << ": ";
        std::getline(std::cin, temp);

        if(temp=="q"||temp=="Q"){
            break;
        }
        else{
            foods[i]=temp;
        }
    }


    std::cout << '\n';
    std::cout << "You like the following food:\n";

    for (int i=0; !foods[i].empty(); i++){ //FOR LOOP CAN HAVE AN ENDING CONDITION LIKE SO!!!
        std::cout << foods[i] << '\n';
    }

    return 0;
}