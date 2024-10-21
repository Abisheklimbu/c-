/*  Preprocessor Declarative 
    Preprocessor provides instructions to compiler. They are also used for defining functions. 
*/

#include <iostream>
using namespace std; 

#ifndef PI
    #define PI 3.1425
#endif

#define input cin
#define print cout

#define maximum(x,y) (x>y?x:y)

int main(){
    int r; 
    print<<"Enter radius of circle: ";
    input>>r;

    print<<"Area of circle is "<< "pie X (radius * radius)"<<endl;
    print<<"Result "<< PI * (r*r)<<endl;

    print<<"Maximum "<< maximum(10,20)<<endl;
}