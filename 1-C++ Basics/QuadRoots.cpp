#include <iostream>
#include "QuadRoots.h"
#include <cmath>

float root(int a, int b , int c){
    float root1, root2;
    root1 = (-b +sqrt(pow(b,2) -4*a*c))/(2*a);
    root2 = (-b -sqrt(pow(b,2) -4*a*c))/(2*a);
    std::cout<<"The root of the quadration function "<<a<<"x^2 + "<<b<<"x + "  <<c<<" are "<< root1<< " and " <<root2;

    return root1, root2;
}