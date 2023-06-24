#include <iostream>
#include <cmath>
#include "Distance.h"

int distance(int v0, int a, int vf){
    float distanceFinal;

    distanceFinal = ((pow(vf,2)) - pow(v0,2))/(2*a);
    std::cout<<"The distance with initial velocity "<<v0<<"m/s, final velocity "<<vf<<"m/s, and accleration "<<a<<"m/s^2 is "<<distanceFinal<<"m.";

    return distanceFinal;
}