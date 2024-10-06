// Constructor in inheritance 
/* Constructor of base/parent class is executed first and after second derived/child class 
   constructor is executed. parameterised constructor of base clss must be called from derived
   class otherwise non parameterised constructor of base class is called. 
*/

#include <iostream>
using namespace std; 

class Base {
public:
    Base(){
        cout<<"Non parameterised base"<<endl;
    }

    Base(int x){
        cout<<"Parameterised base "<<x<<endl;
    }

};

class Derived: public Base {
public:
    Derived(){
        cout<<"Non parameterised derived"<<endl;
    }

    // Derived(int y){
    //     cout<<"Parameterised derived "<<y<<endl;
    // }

    // To call parameterised base class fun
    Derived(int x, int y): Base(x){
        cout<<"Parameterised derived "<<y<<endl;
    }
    
};

int main(){

    // Derived d(10);
    Derived d(15,20);
}