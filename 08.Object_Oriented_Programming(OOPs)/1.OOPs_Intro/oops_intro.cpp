/*
Object Oriented Programming (OOPs)
is a programming paradigm that organizes software design arounds objects, which represent real 
world entities. It is a collection of different objects and objects contains different functions.

Pricciples of OOPs are:
1. Abstraction: hides the internal implementation details and exposes only the neccessary
                functionality.

2. Encapsulation: bundels data and function together within a class and restrict direct access to some 
                  components using access specifiers(public, privated, protected).

3. Inheritance: allows one class(child class) to inherit properties from another class(parent class).

4. Polymorphism: is ability of a function or an object to take many forms. 

Class vs Object:
Class is a blueprint for creating object. Ti defines attribute(data member) and behaviour(member function.)

Object is an instance of a class. It represent a specific entity with attributes and behaviour. 


*/
// Example : 

#include <iostream>
using namespace std; 

class Rectangle {
public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length+ breadth);
    }
};

int main(){
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 5;
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter()<<endl;
    
    return 0;
}