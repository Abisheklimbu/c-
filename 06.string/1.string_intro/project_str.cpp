/*
STRING: are used to store text and character.

*/
#include <iostream>
using namespace std;

int main(){

    // Declaring and Initialiing String 
    /*
    char a[] = "Hello A";
    char b[] ={'H','E','L','L','0','\0'};
    char *c = a;

    cout<<"char a[]: "<<a<<endl;
    cout<<"char b[]: "<<b<<endl;
    cout<<"char *c: "<<c<<endl;
    */

    // READING AND PRINTING STRING
    char name1[50];
    char name2[50];

    cout<<"Enter your name: ";
    cin.get(name1, 50);
    cout<<"Hello "<<name1<<endl;

    cin.ignore();

    cout<<"Enter your name again: ";
    cin.get(name2, 50);
    cout<<"Hello "<<name2<<endl;

    return 0;
}