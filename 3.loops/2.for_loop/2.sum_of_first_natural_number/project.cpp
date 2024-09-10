// sum of first n natural number 
#include <iostream>
using namespace std;

int main(){

    int n,i,sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for(i=0; i<=n; i++)
    {
        sum+=i;
    }
    cout<<"Sum of given "<<n<<" number is "<<sum<<endl;

    return 0;
}