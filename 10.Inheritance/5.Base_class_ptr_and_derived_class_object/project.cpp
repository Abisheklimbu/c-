// BASE CLASS POINTER AND DERIVED CLASS OBJECT 
/* Base class pointer can point on dervied class object but derived class pointer cannot point on 
   base class object. While using base class pointer only function of base class can be called.
*/

#include <iostream>
using namespace std; 

class Base {
public:
    void fun1(){
        cout<<"Function of base class"<<endl;
    }

};

class Derived: public Base {
public:
    void fun2(){
        cout<<"Function of derived class"<<endl;
    }
};

int main(){
    // Derived d;
    // d.fun1();
    // d.fun2();

    Derived d;
    Base *ptr; 
    ptr = &d;
    ptr -> fun1();
    // ptr -> fun2(); cannot be called

}