// strcmp(str1,str1): comparing two string from dictionary format. compare ASCII VALUE
// ASCII: American Standard Code for Information Interchange
#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // STRING1 IS BIGGER THAN STRING2 returns (+ve)
    char s1[10]= "hello";
    char s2[20]= "HELLO";
    cout<<strcmp(s1,s2)<<endl;

    // STRING1 IS SMALLER THAN STRING2 returns(-ve)
    char a1[10]= "Hello";
    char a2[20]= "hELLO";
    cout<<strcmp(a1,a2)<<endl;

    // STRING1 IS EQUAL TO STRING2 returns(0)
    char b1[10]= "Hello";
    char b2[20]= "Hello";
    cout<<strcmp(b1,b2)<<endl;

    return 0;
}