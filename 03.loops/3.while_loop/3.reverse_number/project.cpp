// Reversing a number: eg: 543 ans: 345
#include <iostream>
using namespace std;

int main(){

    int n,m,remain,rev=0;
    cout<<"Enter number: ";
    cin>>n;
    m=n;

    while (n>0)
    {
        remain = n%10;
        n = n/10;
        rev= rev*10+remain;
    }
    cout<<"Reverse of "<<m<<" is "<<rev<<endl;
    
    return 0;
}
