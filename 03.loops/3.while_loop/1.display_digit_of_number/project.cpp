// Displaying digit of number 

#include <iostream>
using namespace std;

int main(){

    int n,remain;
    cout<<"Enter n number: ";
    cin>>n;

    while (n>0)
    {
        remain = n%10;
        n = n/10;
        cout<<remain<<endl;
    }

    return 0;
}