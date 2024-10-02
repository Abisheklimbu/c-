/*
Write a Class for Student with
1. Roll
2. Name
3. Marks in 3 subject
Functions for
-Total marks
-Grade
*/

#include <iostream>
#include <string>
using namespace std; 

class Student{
private:
    int rollno;
    string name;
    int math_marks; 
    int science_marks;
    int english_marks;
    int total_marks;

public: 
    Student(int rol, string n, int math_m, int science_m, int english_m);

    // Mutator 
    void setRollno (int rol);
    void setName (string n);
    void setMath_m (int math_m);
    void setScience_m(int science_m);
    void setEnglish_m (int english_m);

    // Accessor 
    int getRollno (){return rollno; }
    string getName (){return name; }
    int getTotalmarks(){
        return total_marks;
    }

    // Function 
    int total_mark();
    char grade(); 

    // Destructor 
    ~Student();

    

};

int main() {
    int rol, en_m, ma_m, sci_m;
    string n;

    cout << "Enter your roll no: ";
    cin >> rol;

    cout << "Enter your name: ";
    cin.ignore(); // To clear the newline character from the input buffer
    getline(cin, n); // Use getline to allow spaces in the name

    cout << "Enter English marks: ";
    cin >> en_m;

    cout << "Enter Math marks: ";
    cin >> ma_m;

    cout << "Enter Science marks: ";
    cin >> sci_m;

    // Create Student object with correct arguments
    Student s(rol, n, ma_m, sci_m, en_m);

    cout << n << " got " << s.grade() << " grade." << endl;
    return 0;
}
Student::Student(int rol, string n, int math_m, int science_m, int english_m) {
    rollno = rol;
    name = n;
    math_marks = math_m;
    science_marks = science_m;
    english_marks = english_m;
    total_marks = 0;
}
void Student :: setRollno(int r){
    rollno = r;
}

void Student :: setName(string n){
    name = n;
}

void Student :: setEnglish_m(int english_m){
    english_marks = english_m;
}

void Student :: setMath_m(int math_m){
    math_marks = math_m;
}

void Student :: setScience_m(int science_m){
   science_marks = science_m;
}

int Student :: total_mark(){
    return english_marks + math_marks + science_marks ;
}

char Student :: grade(){
    total_marks = total_mark();

    if(total_marks >=270 && total_marks<=300){
        return 'A';
    }
    else if (total_marks >=240 && total_marks<=269)
    {
       return 'B';
    }
    else if (total_marks >=210 && total_marks<=239)
    {
        return 'C';
    }
    else if (total_marks >=180 && total_marks<=209)
    {
        return 'D';
    }
    else{
        return 'F';
    }
    
}

Student :: ~Student(){
    cout<<"Student Object Destroyed"<<endl;
}