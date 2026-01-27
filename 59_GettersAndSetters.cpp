#include <iostream>

// Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute READABLE
// setter = function that makes a private attribute WRITABLE

class Stove{
    private: // If I want this attribute unavailable to others outside the class
        int temperature = 0;

    public:

    Stove(int temperature){
        setTemperature(temperature);
    }

    int getTemperature(){
        return temperature; // READABLE BUT NOT WRITEABLE
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if (temperature >= 10){
            this->temperature = 10;
        }
        else {
            this->temperature = temperature;
        }

        this->temperature = temperature;
    }
};


int main() {

    Stove stove(5);

    // stove.temperature = 100000;

    // stove.getTemperature(5);
    
    std::cout << "The temperature is: " << stove.getTemperature();
}