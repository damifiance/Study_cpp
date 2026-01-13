#include <iostream>
#include <ctime>

int main() {
    int num;
    int guess;

    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout<<"****** NUMBER GUESSING GAME ******\n";

    do{
        std::cout << "Enter a guess between 1-100: ";
        std::cin>> guess;
        tries++;

        if(guess < num){
            std::cout << "Too low!\n";
        }
        else if (guess > num) {
            std::cout << "Too high!\n";
        }

    }while(num != guess);

    std::cout << "You have guessed the number " << num <<" in " << tries <<" tries\n";

    std::cout<<"**********************************";

    return 0;
}