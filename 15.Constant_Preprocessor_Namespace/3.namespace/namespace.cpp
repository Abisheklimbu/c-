/*  Namespace
    A namespace is a declarative region that provides a scope to the identifiers( the name
    of types, function, variable, class, object etc) inside it.    
*/

#include <iostream>
using namespace std;

namespace first{
    void fun(){
    cout<<"Display Fun 1"<<endl;
    }
}

namespace second{
    void fun(){
    cout<<"Display Fun 2"<<endl;
    }
}


// using namespace first;
// int main(){
//     fun();
// }


// scope resolution
int main(){
    first::fun();
    second::fun();
}