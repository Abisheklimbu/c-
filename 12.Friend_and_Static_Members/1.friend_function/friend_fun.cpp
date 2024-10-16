/*  Friend Function
    A friend function is a function that isn't a member of a class but has access 
    to the class's private and protected members.
*/

#include <iostream>
using namespace std; 

class BankEmployee;

class Bank{
private: int a;
protected: int b; 
public: int c;
    friend BankEmployee;
};

class BankEmployee{
public:
    Bank b;
    int fun(){
        b.a = 10;
        b.b = 20;
        b.c = 30;
    }

};

int main(){

   
}