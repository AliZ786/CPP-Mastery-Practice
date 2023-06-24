#include <iostream>
#include "AreaTriangle.h"
#include "SumNN.h"

int main() {
    int choice;
    std::cout <<"Please enter the program you want to run (1 for triangle area, 2 for sum of natural numbers):";
    std:: cin>>choice;

    if (choice ==1) {
        std::cout << "------ Calling the area() function ------" << std::endl;
        area();
    }

    else if (choice ==2) {

        std::cout << "\n----- Calling the sumOfN() function -----" << std::endl;
        int n;
        std::cout << "Enter a natural number: ";
        std::cin >> n;
        sumOfN(n);
    }

    return 0;
}
