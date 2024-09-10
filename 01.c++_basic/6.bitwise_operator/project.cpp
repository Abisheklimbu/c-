// Bitwise operator: are used to perform operation on binary(bit) level.
// operator are: &(and), |(or), ~(not), ^(x-or), <<(lef shift), >>(right shift)

#include <iostream>
using namespace std;

int main(){

    // & and operator
    int a=11, b=7, c;
    c= a & b;
    cout<<c<<endl;

    // | or operator
    int d=11, e=7, f;
    f= d | e;
    cout<<f<<endl;

    // ^ OR operator
    int g=11, h=7, i;
    i= g^h;
    cout<<c<<endl;

    // ~ not operator
    char j=5, k;
    k= ~j;
    cout<<(int)k<<endl;
   
    // << left shift operator
    char l=5, m;
    m= l<<1;
    cout<<(int)m<<endl;

    // >> right shift operator
    char n=20, o;
    o= n>>1;
    cout<<(int)o<<endl;

    return 0;
}