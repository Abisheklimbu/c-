// calculating volume of a cylinder 
// Formula = pie * radius*radius * height

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float pie=3.1416, radius, height, volume_of_cylinder;

    cout<<"Enter radius and height ";
    cin>>radius>>height;

    volume_of_cylinder= pie * ((pow(radius,2)) * height);

    cout<<"Volume of given cylinder is "<<volume_of_cylinder<<"."<<endl;

    return 0;
}