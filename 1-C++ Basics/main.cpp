#include <iostream>
#include "AreaTriangle.h"
#include "SumNN.h"
#include "QuadRoots.h"
#include "Distance.h"
#include "SimpleInterest.h"

int main() {
    int choice;
    std::cout <<"Please enter the program you want to run (1 for triangle area, 2 for sum of natural numbers, 3 for root function, 4 for distance function, 5 for the simple interest function):";
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

    else if (choice ==4){
        std::cout << "\n----- Calling the distance() function -----" << std::endl;
        int v0,vf,a;
        std::cout << "Enter initial velocity:";
        std::cin >> v0;
        std::cout << "Enter final velocity:";
        std::cin >> vf;
        std::cout << "Enter acceleration:";
        std::cin >> a;
        distance(v0,a,vf);
    }

    if (choice ==5){
        std::cout << "\n----- Calling the simpleInterest() function -----" << std::endl;
        int amt,time,rate;
        std::cout << "Enter principle amount:";
        std::cin >> amt;
        std::cout << "Enter time period:";
        std::cin >> time;
        std::cout << "Enter interest rate:";
        std::cin >> rate;
        simpleInterest(amt,time,rate);
    }

    return 0;
}
