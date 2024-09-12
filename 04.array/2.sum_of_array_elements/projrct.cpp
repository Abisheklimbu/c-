// sum of array elements 

#include <iostream>
using namespace std;

int main(){

    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10, sum=0;
    for(int i=0; i<n; i++)
    {
        sum += A[i];
    }
    cout<<"sum of array elements are "<<sum<<endl;

    return 0;
}