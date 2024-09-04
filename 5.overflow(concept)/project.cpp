// Overflow : occurs when a number/character is greater than the maximum value the data type can hold.

#include <iostream>
using namespace std;

int main(){

    char a = 127;
    a++;
    cout<<(int)a<<endl;

    int e = INT_MAX;
    e++;
    cout<<(int)e<<endl;

    return 0;
}