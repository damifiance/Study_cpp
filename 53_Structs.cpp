#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true; // default value
};

int main() {

    // struct = A structure that group related variables under one name
    //          struct can contain many different data types (string, int, double, bool, etc.)
    //          variables in a struct are known as "members"
    //          members can be access with . "Class Memeber Access Operator"

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;
    student3.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << '\n';
    
    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}