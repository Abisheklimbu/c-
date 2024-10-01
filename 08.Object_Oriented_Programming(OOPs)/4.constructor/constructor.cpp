// Constructor : is specially defined method in c++ class that automatically called when instance
//                of class is created. 
/*
1. Default/Argument constructor 
2. Non-Argument constructor 
3. copy constructor 
*/

#include <iostream>
using namespace std;

class Rectangle {

private:
    int length;
    int breadth; 

public: 

    // 1. Default constructor 
    // Rectangle(){
    //     length = 1;
    //     breadth = 1;
    // }

    // 2. Non-arguments constructor 
    Rectangle(int l, int b){
        setLength(l);
        setBreadth(b);
    }

    void setLength(int l){
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }


    // 3. Copy constructor 
    Rectangle( Rectangle &r1){
        length = r1.length;
        breadth = r1.breadth;
    }
    int area(){
        return length * breadth;
    }
};

int main(){

    Rectangle r1(10,5);
    Rectangle rect(r1);

    cout<<"Area of a rectangle(rect) is "<<rect.area()<<endl;

    return 0;
}