// strstr(main,sub): finding a existence of substring from main ones

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // USING strstr
    char a[20]= "Programming";
    char b[10]= "gram";

    cout<<strstr(a,b)<<endl;

    // USING strchar: Finding character from main string
    char c[20]= "Programming";
    char d= 'm';

    cout<<strchr(c,d)<<endl;

    // USING strrchar: Finding character from main string from right side 
    char e[20]= "Programming";
    char f= 'm';

    cout<<strrchr(e,f)<<endl;

    return 0;
}