// Increment operator: (++), as its name suggest, it increase the value of variable by one. 
// types of increment operator are:
// 1. pre increment: ++x;
// 2. post increment: x++;

#include <iostream>
using namespace std;

int main(){

        int x=5;
        int y=10;
        int z;
        

        // pre increment
        z = ++x * y;
        cout<<"x="<<x<<" "<<"y="<<y<<" "<<"z="<<z<<endl;

        cout<<""<<endl;

        // post increment
        int a=5, b=10, c;
        c = a++ * b;
        cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<endl;
        return 0;
}
