// Function Overriding
/*  Function overriding is a type of polymorphism in which we redefine the member function of 
    class which is inherited from its base class. 
*/

#include <iostream>
using namespace std; 

class Parent {
public:
    void fun(){
        cout<<"Function of parent class."<<endl;
    }
};

class Child: public Parent {
public:
    void fun(){
        cout<<"Function of child class."<<endl;
    }
};

int main(){
    Child c; 
    c.fun();
}