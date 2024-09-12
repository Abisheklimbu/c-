// Finding maximum from array elements

#include <iostream>
using namespace std;

int main(){

    int A[5], n=5, max=0;
    max = A[0];

    cout<<"Enter 5 numbers: ";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for (int i=1; i<5; i++)
    {
        if(A[i]>max)
        {
            max = A[i]; 
        }
    }
    cout<<"Maximum number is "<<max<<" in array."<<endl;
    return 0;
}