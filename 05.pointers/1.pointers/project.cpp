/*
POINTERS
A pointer is a variable that store the memeory location of an object(another variable).
Program main()(code section) can access Heap indirectly using pointers. Suppose if 
you have a file in local machine or disk you can only access it usinh pointers.
*/ 

#include <iostream>
using namespace std;

int main(){

    // Declaring local variable
    int x=10;

    // Declaring pointers and initialzing value
    int *p = &x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    return 0;

}