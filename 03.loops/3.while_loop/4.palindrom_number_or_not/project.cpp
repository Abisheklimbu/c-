// check a number is palindrom or not 

#include <iostream>
using namespace std;

int main(){

    int n,m,remain,rev=0;
    cout<<"Enter number: ";
    cin>>n;
    m=n;

    while(n>0)
    {
        remain = n%10;
        n = n/10;
        rev = rev*10+remain;
    }
    if(rev == m)
    {
        cout<<m<<" is a palindrom number.";
    }
    else
    {
        cout<<m<<" is not a palindrom number.";
    }

    return 0;
}