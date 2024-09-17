// Difference between Heap and Stack in Dynamic allocation

// YOU CANNOT MODIFY SIZE OF AN ARRAY IF IT IS CREATED IN STACK 
// #include <iostream>
// using namespace std;

// int main(){

//     int a[5] = {1,2,3,4,5};
//     cout<<a[3]<<endl;

//     int a[10] = {1,2,3,4,5,6,7,8,9,10};
//     cout<<a[8]<<endl;

//     return 0;
// }

// BUT YOU CAN MODIFY SIZE OF AN ARRAY IF IT IS CREATED IN HEAP USING POINERS 
#include <iostream>
using namespace std;

int main(){

    int count =1;

    int *p = new int[10];
    
    // for(int i=0; i<10; i++)
    // {
    //     p[i]= count++;
    // }
    
    // for(int i=0; i<10; i++)
    // {
    //     cout<<p[i]<<" "<<endl;
    // }
    // cout<<endl;
    // cout<<endl;

    // Again changing size of p
    
    delete []p;
    p = nullptr;

    p = new int[20];
    for(int i=0; i<20; i++)
    {
        p[i]= count++;
    }
    
    for(int i=0; i<20; i++)
    {
        cout<<p[i]<<" "<<endl;
    }
    

    return 0;
}