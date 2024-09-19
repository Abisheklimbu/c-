// strlen(): Finding length of a string 

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // char A[20] = "Hello World";
    // cout<<"Length of string A is "<<strlen(A)<<endl;

    char name[50];
    cout<<"Enter name: ";
    cin.get(name, 50);
    cout<<name<<" name length is "<<strlen(name)<<"."<<endl;

    return 0;
}