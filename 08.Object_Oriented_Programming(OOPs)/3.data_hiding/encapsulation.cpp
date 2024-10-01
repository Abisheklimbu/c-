// Data Hiding : Making data private and Making functions public. 
// Mutatot/Setter: Function stores value in a private memeber variable. 
// Accessor/Getter: Function retrives value from a private memeber variable. 

#include <iostream>
using namespace std; 

class Rectangle {

private: 
    int length; 
    int breadth; 

public:

    void setLength(int l)
    {
        if(l>=1){
            length = l;
        }
        else{
            length = 1;
        }
    }


    void setBreadth(int b)
    {
        if(b>=1){
            breadth =b;
        }
        else{
            breadth = 1;
        }
    }


    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }


    int area(){
        return length * breadth;
    }
}; 

int main(){
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5); 
    cout<<"Length = "<<r1.getLength()<<endl;
    cout<<"Breadth = "<<r1.getBreadth()<<endl;
    cout<<"Area of a rectangle is "<<r1.area()<<endl;

    return 0;
}