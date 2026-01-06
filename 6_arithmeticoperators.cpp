/*
    arithmetic operators
        return to the result of a specific
        arithmetic operation (+ - * / %)
    
    parenthesis
    multiplication and division
    addition and subtraction
*/

#include <iostream>

int main(){

    int students = 20;
    students = students + 1;
    students += 1;
    students += 2;

    students++; // 이거는 students+=1 이랑 같은 효과 (increment operator) ++students 해도 됨

    students -= 1;
    students -= 2;

    students--; // 이거는 students -=1 이랑 같은 효과 (decrement operator) --students 해도 됨

    students = 2*students;
    students *= 2;
    students = students/2;
    students /= 2;

    //만약 안 나누어떨어지는 숫자로 나누면 앞에서 int라고 지정했기 때문에 truncate!


    std::cout << students;

    int remainder = students % 3;

    return 0;
}