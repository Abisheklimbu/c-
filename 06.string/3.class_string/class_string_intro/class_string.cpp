// CLASS string is a builtin string in c++ 

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    cout<<"Enter your name: ";
    getline(cin, str);

    cout<<"Hello "<<str<<" 😀"<<endl;

    return 0;
}