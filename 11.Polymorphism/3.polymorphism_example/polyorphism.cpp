/*  Polymorphism
    Polymorphism is the ability to specify an operation in a base class and then provide
    multiple implementation(called methods) of that operation in subclass.

*/

#include <iostream>
using namespace std;

class Car {
public:
    virtual void start(){
        cout<<"Car Started."<<endl;
    }

};

class BMW: public Car{
public:
    void start(){
        cout<<"BMW Started."<<endl;
    }
};

class Thar: public Car{
public:
    void start(){
        cout<<"Thar Started."<<endl;
    }
};

int main(){
    Thar t;
    t.start();

    Car *ptr = new BMW();
    ptr -> start();

    ptr = &t;
    ptr -> start();

    return 0;
}