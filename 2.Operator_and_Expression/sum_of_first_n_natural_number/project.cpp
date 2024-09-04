// Finding sum of first n natural number 
// Formula: sum = n*(n+1)/2

#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout<<"Enter n number ";
    cin>>n;

    sum = n*(n+1)/2;

    cout<<"sum of given n natural number is "<<sum<<"."<<endl;

    return 0;
}