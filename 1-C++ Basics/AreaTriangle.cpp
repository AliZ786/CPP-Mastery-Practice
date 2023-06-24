// Your First C++ Program

#include <iostream>
using namespace std;

int main() {
    int base, height, area;
    cout<<"Enter the base of the triangle: ";
    cin>>base;
    cout<<"Enter the height of the triangle: ";
    cin>>height;

    area = (float)((base*height))/2;

    cout<<"\nThe Area of the triangle is: "<<area<<endl;



}