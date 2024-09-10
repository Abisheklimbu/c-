// Enum
// enumerated dataype is used to defiune user defined datatype. with the help of existing datatype we can 
// define our own datatype.

#include <iostream>
using namespace std;

// enum day {sun=1, mon, tue, wed, thu, fri, sat};
// int main(){

//     day d;
//     d = mon;

//     cout<<sun<<endl;
//     cout<<mon<<endl;
//     cout<<tue<<endl;
//     cout<<wed<<endl;
//     cout<<thu<<endl;
//     cout<<fri<<endl;
//     cout<<sat<<endl;
// }

// Typedef : Type definationis used for aliasing existing data type, user define dataype and pointers to
//  a more meaningful name 

typedef int marks;
int main(){

    marks m1,m2,m3;

    m1 = 100;
    m2 = 100;

    m3 = m1+m2;

    cout<<m3<<endl;

}
