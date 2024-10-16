/*  Static memeber 
    When a data member is declared as static , only one copy of the data is maintained 
    for all objects of the class. */

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int roll_no;
    string name;

    static int addmission_no;

    Student (string n){
        name = n;

        addmission_no ++;
        roll_no = addmission_no;

    }

    void display(){
        cout<<"Name: "<<name<<" Roll no: "<<roll_no<<endl;
    }


};

int Student :: addmission_no = 0;

int main(){
    string s_name;
    cout<<"Enter student name: ";
    getline(cin, s_name);

    Student s1(s_name);
    s1.display();

    cout<<"Admission no: "<< Student::addmission_no<<endl;

    return 0;
}