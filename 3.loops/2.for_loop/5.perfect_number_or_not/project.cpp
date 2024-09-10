// perfect number: means sum of factor sum == 2*n is perfect if not its not a perfect number 
#include <iostream>
using namespace std;

int main(){

    int n,i,sum=0;
    cout<<"Enter number: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(n%i ==0){
            sum +=i;
        }
    }
    if(sum == n*2){
        cout<<n<<" is a perfect number.";
    }
    else{
        cout<<n<<" is not a perfect number.";
    }

    return 0;
}