// Checking number is amstrong number or not 
// amstrong num means if(n:153) == cube of (1) +(5) +(3) is amstrong number.

#include <iostream>
using namespace std;

int main(){

    int n,m,remain,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    m=n;

    while(n>0)
    {
        remain = n%10;
        n = n/10;
        sum = sum+ remain*remain*remain;
    }
    if(sum == m)
    {
        cout<<m<<" number is a amstrong number.";
    }
    else{
        cout<<m<<" number is not a amstrong number.";
    }

    return 0;
}