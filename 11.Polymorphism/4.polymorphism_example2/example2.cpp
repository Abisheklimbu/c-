#include <iostream>
using namespace std; 

class Shape {
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle: public Shape{
private:
    float length;
    float breadth;
public:
    Rectangle (int l=1, int b=1){
        length = l;
        breadth = b;
    }

    float area(){
        return length * breadth;
    }

    float perimeter(){
        return 2 * (length + breadth);
    }

};

class Circle: public Shape{
private:
    float radius;
public:
    Circle (float r){
        radius = r;
    }

    float area(){
        return 2 *3.14 *(radius*radius);
    }

    float perimeter(){
        return 2 * 3.14 * radius;
    }

};

// int main(){
//     Shape *p = new Rectangle(10,10);
//     cout<<"Area of rectangle is "<<p->area()<<endl;
//     cout<<"Perimeter of rectangle is "<<p->perimeter()<<endl;
    
//     p = new Circle(5);
//     cout<<"Area of circle is "<<p->area()<<endl;
//     cout<<"Perimeter of circle is "<<p->perimeter()<<endl;


// }

int main(){
    int l,b;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;

    Shape *ptr = new Rectangle(l,b);
    cout<<"Area of rectangle is "<<ptr->area()<<endl;
    cout<<"Perimeter of rectangle is "<<ptr->perimeter()<<endl;

    float r;
    cout<<"Enter radius of circle: ";
    cin>>r;

    ptr = new Circle(r);
    cout<<"Area of circle is "<<ptr->area()<<endl;
    cout<<"Perimeter of circle is "<<ptr->perimeter()<<endl;

}