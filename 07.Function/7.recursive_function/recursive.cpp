// RECURSIVE FUNCTION: is a function that calls itself repeatedly until a certain condition is met. 

#include <iostream>
using namespace std;

void fun(int x){
    if(x>0)
    {
        fun(x-1);
        cout<<x<<endl;
    }
}

int main(){
    int x =5;
    fun(x);
    return 0;
}
