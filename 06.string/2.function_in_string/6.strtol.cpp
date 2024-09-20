// strtol: used change string into long interger 
// strtof: used change string into float

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char A[10] = "234";
    char B[10] = "20.25";

    long int x= strtol(A,NULL, 10);
    float y = strtof(B,NULL);

    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}