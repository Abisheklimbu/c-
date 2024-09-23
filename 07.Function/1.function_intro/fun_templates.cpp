/*  There is a solution for function overloading known as function templates but parameter size
    size dhould be of same. 
*/

#include <iostream>
using namespace std;

// addition function of any value_type(float,int,double..etc)
template <class T> //class template

T add(T x, T y){
    return x+y;
}

// main function
int main(){

    cout<<"Addtion of ineteger value is "<<add(10,10)<<endl;
    cout<<"Addtion of float value is "<<add(12.5f,12.5f)<<endl;
    cout<<"Addtion of double value is "<<add(10.5,10.5)<<endl;

    return 0;
}