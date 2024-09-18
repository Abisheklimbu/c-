/*
reference : is an alias or another name to  an existing variable
*/

#include <iostream>
using namespace std;

int main(){
    int x=10;
    int z =5;

    // reference 
    int &y = x;

    cout<<x<<endl;

    cout<<y<<endl;

    // you cannot reused y once it has been declared
    // int &y = z;
    // int y=9;

    return 0;
}