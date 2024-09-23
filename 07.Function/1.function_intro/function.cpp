// FUNCTION : is a module which perform a specific task. Ti is called by name and can take 0 or 
// more parameter which return single value

// syntax: return_type function_name(parameter)
// Example 

#include <iostream>
using namespace std;

int add(int x, int y){
    int z;
    z = x + y;
    return z;
}

int main(){
    int a=10, b=10, c;
    c = add(a,b);
    cout<<"Addition of a and b is "<<c<<endl;

    return 0;
}