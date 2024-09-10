// compund assignment operator: are shourtcuts that do math operation and assignment in one step. these are
// related to arthmetic and as well as other operator 
// Example: +=, -=, *=, %=, /=, &=, |=, <<=, >>=.

#include <iostream>
using namespace std;

int main(){
    int sum= 10;
    int x = 5;

    // sum = sum + x;
//OR    
    sum+=x;
    cout<<"sum + x is "<<sum<<endl;
    return 0;

}