/* IN C++ You can give same function name but it should have different size of parameter or
   different paraneter_type which is knowns as function overloading. 
*/

#include <iostream>
using namespace std;

// int add function 
int add(int x, int y){
    return x+y;
}

// float add function 
float add(float x, float y){
    return x+y;
}

// addition three integer 
int add(int x, int y, int z){
    return x+y+z;
}


// Main fuction
int main(){

    cout<<"int addition of int(add) is "<<add(10,10)<<endl;
    cout<<"float addition of int(add) is "<<add(10.5f,10.5f)<<endl;
    cout<<"int addition of three parameter int(add) is "<<add(10,10,10)<<endl;
    
    return 0;
}