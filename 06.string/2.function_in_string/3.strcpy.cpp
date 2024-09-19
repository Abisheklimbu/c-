// strcpy(destination, source): used to copy souce string into destination 

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // UISNG strcpy
    char a[20];
    char b[20] = "Hello World";

    cout<<"Value of a after copied b value: "<<strcpy(a,b)<<endl;

    // UISNG strncpy giving length to copy
    char c[20];
    char d[20] = "Hello";

    cout<<"Value of c after copied c value(len 4): "<<strncpy(c,d,2)<<endl;

    return 0;
}