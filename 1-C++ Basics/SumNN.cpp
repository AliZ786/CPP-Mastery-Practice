#include <iostream>
#include "SumNN.h"

void sumOfN(int n) {
    if (n < 0){
        std::cout<<"The number "<<n<<" is not a valid natural number. Please try again!";
    }
    else{
    int sum = n * (n + 1) / 2;
    std::cout << "The sum of the natural numbers up to " << n << " is: " << sum << std::endl;
}
}
