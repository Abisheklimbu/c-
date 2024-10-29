/*  Virtual Demo
    Virtual Destructor in C++ is a member function that frees up the memory allocated by 
    the object of a child class or derived class when it is removed from the memory using 
    the parent class pointer object.
*/

#include <iostream>
using namespace std; 

class Parent {
public:
    Parent(){
      cout<<"Constructor of Parent Class"<<endl;  
    }
    virtual ~Parent() {
        cout<<"Destructor of Parent Class"<<endl;  
    }

};

class Child : public Parent {
public:
    Child(){
      cout<<"Constructor of child Class"<<endl;  
    }
    ~Child() {
        cout<<"Destructor of child Class"<<endl;  
    }
};

void fun(){
    Parent *ptr = new Child();
    delete ptr;
    
}

int main(){
    fun();
}