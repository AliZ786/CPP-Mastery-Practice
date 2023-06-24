#include <iostream>
#include "AreaTriangle.h"
#include "SumNN.h"

int main() {
    std::cout << "------ Calling the area() function ------" << std::endl;
    area();

    std::cout << "\n----- Calling the sumOfN() function -----" << std::endl;
    int n;
    std::cout << "Enter a natural number: ";
    std::cin >> n;
    sumOfN(n);

    return 0;
}
