#include <iostream>
using namespace std; 

class Rectangle{
public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }
};

int main(){

    // 1. First Method 
    // Rectangle r1; 
    // Rectangle *ptr; 
    // ptr = &r1;

    // 2. Second Method
    Rectangle *ptr = new Rectangle();
    ptr -> length = 10;
    ptr -> breadth = 5;

    cout<<"Area of rectangle is "<<ptr -> area()<<endl;
    
    return 0;
}