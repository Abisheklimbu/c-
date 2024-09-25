// GLOBAL VARIABLE
// Global variable is decalred outside of all functions usually top of the program.

// LOCAL VARIABLE
// Local variable is declared inside a function or a block(eg: {})

#include <iostream>
using namespace std; 

int x = 20; //global variable 

void fun(){
    x++;
    cout<<x<<endl;
}

int main(){
    int y = 30; //local variable 

    cout<<"x + y is "<<x+y<<endl;

    fun();
    return 0;
}
