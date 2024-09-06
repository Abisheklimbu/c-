// Finding area of circle 
// Formula: Area = pi * (r*r) or pow(r)

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float radius,pi=3.1425,area;

    cout<<"Enter radius: ";
    cin>>radius;

    area = pi *(radius*radius);

    cout<<"Area of circle is "<<area<<endl;

}