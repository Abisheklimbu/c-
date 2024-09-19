// strcat(destination, scource) : string concatenation joins two string. 
// Final result stores in destication

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // String concatination using strcat
    char s1[20]="Hello";
    char s2[20]=" world";

    cout<<"s1 + s2: "<<strcat(s1,s2)<<endl;

    // String concatination using strncat with length
    char a1[20] = "Good";
    char a2[20] = " Morning";

    cout<<"s1 + s2 using length: "<<strncat(a1,a2,5)<<endl;

    return 0;
}