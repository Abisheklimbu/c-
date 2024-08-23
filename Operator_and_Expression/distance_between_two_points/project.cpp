// calculating distance between two points in a 2D plane
// Formula = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)))

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float distance,x1,x2,y1,y2;

    cout<<"Enter x1, x2, y1, y2: ";
    cin>>x1>>x2>>y1>>y2;

    distance = sqrt( (pow((x2-x1),2)) + (pow((y2-y1),2)));

    cout<<"Distance = "<<distance<<"."<<endl;

    return 0;
}