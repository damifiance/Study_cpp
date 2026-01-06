#include <iostream>
#include <cmath> //for pow
#include <algorithm> //for min and max

int main() {
    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x,y);
    // z = std::min(x,y);
    // z = std::pow(2.0,3.0);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);

    std::cout << z;

    return 0;
}