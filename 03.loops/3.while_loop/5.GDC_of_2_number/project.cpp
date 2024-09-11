// GDC 

#include <iostream>
using namespace std;

int main(){

    int m,n,a,b;
    cout<<"Enter first number: ";
    cin>>m;
    a=m;
    cout<<"Enter second number: ";
    cin>>n;
    b=n;

    while (m!=n)
    {
       if(m>n){
        m = m-n;
       }
       else if(n>m){
        n = n-m;
       }
    }
    
    cout<<m<<" is GDC of "<<a <<" and "<<b<<endl;

    return 0;
}