// Array are used to store multiple values in single variable instead of declaring multiple variable
// It stores values in continuous memeory space. 

// Example 1
#include <iostream>
using namespace std;

// // Example 1: printing single value of element 
// int main(){

//     int A[5] ={2,4,6,8,10};

//     cout<<A[0]<<endl;

//     return 0;
// }


// // Example 2: printing all values of element
// int main(){

//     int A[5]={1,2,3,4,5};

//     for(int i=0; i<5; i++)
//     {
//         cout<<A[i]<<endl;
//     }
//     return 0;
// }


// // Example 3: Using For each loop for printin all values from element 
// int main(){

//     int A[] = {2,4,6,8,10,12,14,16};

//     for(int x:A)
//     {
//         cout<<x<<endl;
//     }
//     return 0;
// }


// Example 4: Aking user to insert vaules in elements and print all values 
int main(){

    int A[5];
    cout<<"Enter 5 number: ";
    for(int i=0; i<5; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<A[i]<<endl;
    }

    return 0;
}