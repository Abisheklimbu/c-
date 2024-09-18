/*
There are only five arthmetic operator in pointers
1. p++
2. p--
3. P + 2 (or any constant value)
4. p - 2 (or any constant value)
5. p - q (pointers - pointers)va;ues
*/

#include <iostream>
using namespace std;

int main(){

    int A[5] = {1,2,3,4,5};
    int *p = A, *q= &A[1];

    cout<<"First value of P: "<< *p <<endl;

    p++;
    cout<<"First value of P: "<< *p <<endl;

    p--;
    cout<<"Decrement value of P--: "<< *p <<endl;

    cout<<"Increment value of P + 3: "<< *(p+3) <<endl;

    cout<<"Value of (P+ 3) - &q: "<< p-q <<endl;
    
    return 0;
}