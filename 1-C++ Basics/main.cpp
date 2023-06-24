#include <iostream>
#include "AreaTriangle.h"
#include "SumNN.h"
#include "QuadRoots.h"

int main() {
    int choice;
    std::cout <<"Please enter the program you want to run (1 for triangle area, 2 for sum of natural numbers, 3 for root function):";
    std:: cin>>choice;

    if (choice ==1) {
        std::cout << "\n------ Calling the area() function ------" << std::endl;
        area();
    }

    else if (choice ==2) {

        std::cout << "\n----- Calling the sumOfN() function -----" << std::endl;
        int n;
        std::cout << "Enter a natural number: ";
        std::cin >> n;
        sumOfN(n);
    }

    else if (choice ==3){
        std::cout << "\n----- Calling the root() function -----" << std::endl;
        int a,b,c;
        std::cout << "Enter coefficient a:";
        std::cin >> a;
        std::cout << "Enter coefficient b:";
        std::cin >> b;
        std::cout << "Enter coefficient c:";
        std::cin >> c;
        root(a,b,c);
    }

    return 0;
}
