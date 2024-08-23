// Calculating Simple Interest 
// Formula: SI = P*R*T/100

#include <iostream>
using namespace std;

int main()
{
    float S_I, P, R, T;

    cout<<"Enter Principal, Rate, Time ";
    cin>>P>>R>>T;

    S_I = (P*T*R)/100;

    cout<<"Simple Interest = "<<S_I<<"%."<<endl;

    return 0;
}