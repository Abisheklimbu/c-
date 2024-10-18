// template<class T>

#include <iostream>
#include <string>
using namespace std; 

template <class T>
class Math {
private:
    T x;
    T y;

public:
    Math(T x, T y) {
        this->x = x;
        this->y = y;
    }


    T add(){
        return x + y;
    };
    T subtract(){
        return x - y;
    };
    T multiply(){
        return x * y;
    };
    T division(){
        if (y ==0)
            throw string ("Division by zero");

        return x / y;
    };
};

int main(){

    Math<int> m(20,10);
    cout << "Addition: " << m.add() << endl;
    cout << "Subtraction: " << m.subtract() << endl;
    cout << "Multiplication: " << m.multiply() << endl;

    try
    {
        cout << "Division: " << m.division() << endl;
    }
    catch(string e){
        cout<<e<<endl;
    }
   

    return 0;
}
