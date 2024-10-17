/*  Exception Handling 
    Exception handling in C++ is a mechanism that allows a program to deal with unexpected 
    events or errors during execution in a structured and controlled way. 
    It helps prevent a program from crashing due to runtime errors such as 
    invalid input, division by zero, out-of-bound array access, or memory issues.
   
    C++ uses three primary keywords for exception handling:

    try: Defines a block of code in which exceptions may occur.
    catch: Catches and handles exceptions thrown in the try block.
    throw: Used to signal (or throw) an exception when an error occurs.
*/

#include <iostream>
#include <string>
using namespace std; 

int division(int x, int y) throw(string) {
    if(y==0)
        throw string ("Exception caught: Division by zero error!");
    return x/y;

}

int main(){
    int a,b,c;
    cout<<"Enter two number: ";
    cin>>a>>b;

    try
    {   
        // if(b==0)
        //     throw string ("Exception caught: Division by zero error!");
        // c = a/b;

        c = division(a,b);
        cout<<a<<" divided by "<<b<<" is "<<c<<endl;
    }
    catch(string e)
    {
        cout<<e<<endl;
    }
    
    return 0;
}