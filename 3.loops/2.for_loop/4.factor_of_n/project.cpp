// Factor of n number : means print the number of n divisible by 1 - n number and remainder id ==0

#include <iostream>
using namespace std;

int main(){

    int n,i;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Factorial of "<<n<<" are: \n";
    for(i=1; i<=n; i++)
    {
        if(n%i == 0){
            cout<<i<<endl;
        }
    }

    return 0;
}