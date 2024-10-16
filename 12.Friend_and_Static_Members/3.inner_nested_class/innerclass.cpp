/*  Inner/Nested classes
    Inner or Nested class in C++ is a type of class that is declared inside another class.*/

#include <iostream>
using namespace std;

class outer_class {
public:

    void fun_outer(){
        i.display();
    }

    class inner_class {
    public:
        void display(){
            cout<<"Display of inner_class."<<endl;
        }

    };
    inner_class i;

};

int main(){
    // outer_class ot;
    // ot.fun_outer();

    outer_class :: inner_class i;
    i.display();

}