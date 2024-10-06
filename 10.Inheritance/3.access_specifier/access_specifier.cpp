/*  Access specifier: 
    1. private: Accessable only inside parent/base class. 
    2. protected: Accessable inside parent/base class and derived/child class.
    3. public:  Accessable inside parent/base class, derived/child class and also upon object. 
*/

#include <iostream>
using namespace std; 

// // Parent class
// class Base {
// private: 
//     int a;
// protected:
//     int b;
// public:
//     int c; 

//     void funBase(){
//         a = 10; // All three Accessable
//         b = 20; 
//         c = 30;
//     }

// };

// // child class
// class Derived: public Base {
// public:
//     void funDervied(){
//         a = 10; // Not Accessable
//         b = 20; // Accessable
//         c = 30; // Accessable
//     }

// };

// int main(){
//     // Object
//     Base b;
//     b.a = 10; // Not Accessable
//     b.b = 20; // Not Accessable
//     b.c = 30; // Accessable

// };


// Then How to access :

// Parent class:
class Square {
private:
    int side;
public:
    void setSide(int s){
        side = s;
    }
    int getSide(){
        return side;
    }

    int area(){
        return side * side;
    }
};

int main(){
    // Object
    Square s;
    s.setSide(5);
    cout<<"Side is "<<s.getSide()<<endl;
    cout<<"Area of Square is "<<s.area()<<endl;
}

