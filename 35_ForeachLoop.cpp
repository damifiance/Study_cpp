#include <iostream>

int main() {

    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    // OG for loop
    
    for (int i =0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << '\n';
    }

    std::cout << '\n';

    // foreach loop

    for (std::string student : students) {
        std::cout << student << '\n';
    }

    std::cout << '\n';

    int grades[] = {95, 60, 79, 78, 81, 68};

    for (int grade : grades) {
        std::cout << grade << '\n';
    }    

    return 0;
}