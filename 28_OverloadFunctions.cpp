#include <iostream>

// you can have multiple functions with the same name if you have the different parameters!
// <a functions name + its parameters> are called the functions signatures!
void bakePizza(){
    std::cout<<"Here is your Pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout<<"Here is your "<< topping1 << " Pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout<<"Here is your "<< topping1 <<" and " << topping2 <<" Pizza!\n";
}



int main() {

    bakePizza();
    bakePizza("Cheese");
    bakePizza("Pepperoni", "Cheese");

    return 0;
}