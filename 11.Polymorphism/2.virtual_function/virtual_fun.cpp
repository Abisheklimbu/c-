/*  Virtual Function
    is a base class member function that you can redefine in a dervied class to achieve 
    polymorphism. 

*/

#include <iostream>
using namespace std; 

class Parent {
public: 
    virtual void fun(){
        cout<<" Function of parent class" <<endl;
    }
};

class Child: public Parent {
public: 
    void fun(){
        cout<<" Function of child class" <<endl;
    }
};

int main(){
    Parent *p = new Child();
    p -> fun();
}