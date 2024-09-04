// Calculating distance 
// Formula: Distance = speed * time

#include <iostream>
using namespace std;

int main()
{
    float speed, time, distance;

    cout<<"Enter speed and time ";
    cin>>speed>>time;

    distance= speed * time;

    cout<<"Distance = "<<distance<<" km/hr."<<endl;

    return 0;
}