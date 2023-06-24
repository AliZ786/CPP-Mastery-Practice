#include <iostream>
#include "AreaTriangle.h"

void area() {
    int base, height;
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    float triangleArea = (base * height) / 2.0;

    std::cout << "The Area of the triangle is: " << triangleArea << std::endl;
}
