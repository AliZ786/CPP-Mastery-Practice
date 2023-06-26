#include <iostream>
#include "SimpleInterest.h"


float simpleInterest(int principleAmt, int time, int interestRate){
    float SI;

    SI = principleAmt*time*interestRate/100;

    std:: cout<<"The simple interest value is: "<<SI;
    return SI;
}