// SCOPE RESOLUTION: Writing function outside class. 

#include <iostream>
using namespace std; 

class Rectangle{
private:
    int length;
    int breadth;

public:
    // Constructor
    Rectangle(int l, int b);

    // Accessor
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }

    // Mutator 
    void setLength(int l);
    void setBreadth(int b); 

    // Functions/Facilitator 
    int area();
    int perimeter();

    // enquiry
    bool isSquare(); 

    // Destructor
    ~Rectangle();

};

int main(){

    int l, b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;

    Rectangle r(l,b);
    cout<<"Area is "<<r.area()<<endl;
    if (r.isSquare()){
        cout<<"It size are equal"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    // return 0;
};

 Rectangle :: Rectangle(int l, int b){
    length = l;
    breadth = b;
}

void Rectangle :: setLength(int l){
    length = l;
}

void Rectangle :: setBreadth(int b){
    breadth = b;
}

int Rectangle :: area(){
    return length * breadth;
}

int Rectangle :: perimeter(){
    return 2*(length + breadth);
}

bool Rectangle :: isSquare(){
   return length == breadth;
}

Rectangle :: ~Rectangle(){
    cout<<"Rectangle Class Destroyed; "<<endl;
}
