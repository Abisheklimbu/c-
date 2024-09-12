// Linear Serach 
/* It is a simple algorith that sequentially checks each elemets of an array or list
  until it finds a target values or reaches the end. If target is found its index is returned and 
  not found than return values is not fouded.
*/

#include <iostream>
using namespace std;

int main(){

    int A[10], key, n=10;
    cout<<"Enter 10 numbers: ";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter number to check: ";
    cin>>key;

    for(int i=0; i<n; i++)
    {
        if(key == A[i])
        {
            cout<<key<<" value is present at "<<i<<" index of array."<<endl;
            return 0;
        }
    }
    cout<<key<<" value is not present in arrray."<<endl;

    return 0;
}