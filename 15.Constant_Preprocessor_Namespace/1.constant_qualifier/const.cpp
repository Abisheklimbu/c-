/*  Constant Qualifier 
    Constant Qualifier explicilty declares a data object as something that cannot be chaged. 

*/

#include <iostream>
using namespace std; 

class Pratice{
public:
   int x=10;
   int y=20;

    void fun() const{
        x++;
        cout<<x<<" "<<y<<endl;
      
    }


};

int main(){

    // // 1 :  variable 'x' declared const and value cannot be changed.
    // const int x = 10;
    // x++;

    // cout<<x<<endl;


    // // 2.  read-only variable is not assignable.
    // const int x = 10; 
    // const int *ptr = &x; 
    // ++*ptr;

    // cout<<x<<endl;

    // 3. member function 'Pratice::fun' is declared const. 
    Pratice p;
    p.fun();
}