// Binary Search 
/*
Binary search is an efficient algorithm that finds a target in a sorted array by repeatedly 
dividing the search range in half.
*/

#include <iostream>
using namespace std;

int main(){

    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int low=0, high=9, key, mid;
    cout<<"Enter key: ";
    cin>>key;

    while(low <= high)
    {
        mid = (low+high)/2;
        if(key== A[mid])
        {
            cout<<"Found at "<<mid;
            return 0;
        }
        
        else if (key < A[mid])
        {
            high= mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        
    }
    cout<<"Not Found "<<endl;

    return 0;
}