// Destructor 
/* A destructor is a member function that is invoked automatically when the object goes 
out of scope or is explicitly destroyed by a call to delete or delete[]
*/

#include <iostream>
using namespace std; 

class Demo{
public:
    Demo(){
        cout<<"Constructor of Demo"<<endl;
    }

    ~Demo(){
        cout<<"Destructor of Demo"<<endl;
    }
};

// void fun(){
//     Demo d;
// }

// if pointer to class 
void fun(){
    Demo *ptr = new Demo();
    delete ptr;
}

int main(){
    fun();
}