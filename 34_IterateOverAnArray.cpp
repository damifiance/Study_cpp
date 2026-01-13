#include <iostream>

int main() {
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << students[0] << '\n';
    std::cout << students[1] << '\n';
    std::cout << students[2] << '\n';
    std::cout << students[3] << '\n';

    std::cout << '\n';

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (int i =0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << '\n';
    }

    std::cout << '\n';

    for (int i =0; i < sizeof(grades)/sizeof(char); i++) {
        std::cout << grades[i] <<'\n';
    }

    return 0;
}