// Employee Project: Fulltime and Parttime employee 

#include <iostream>
#include <string>
using namespace std; 

class Employee {
private:
    int e_id;
    string name; 

public:
    Employee(int e, string n){
        e_id = e;
        name = n;
    }

    int getEmployeeID(){
        return e_id;
    }

    string getEmployeeName(){
        return name;
    }
};

class FulltimeEmployee: public Employee {
private:
    int salary;

public:
    FulltimeEmployee(int e, string n, int sal):Employee(e,n){
        salary = sal;
    }

    int getSalary(){
        return salary;
    }
};

class ParttimeEmployee: public Employee{
private: 
    int wages;

public:
    ParttimeEmployee(int e, string n, int w): Employee(e,n){
        wages = w;
    }

    int getWages(){
        return wages;
    }
};

/*
int main(){
    FulltimeEmployee ft(1, "Abishek", 50000);
    ParttimeEmployee pt(2, "Ram", 150);

    cout<<"Fulltime Employee: "<<ft.getEmployeeName()<<". Salary: "<<ft.getSalary()<<endl;
    cout<<"Parttime Employee: "<<pt.getEmployeeName()<<". Salary: "<<pt.getWages()<<endl;
}
*/

int main(){
    int eid, esalary;
    string ename;

    FulltimeEmployee ft(int eid, string ename, int esalary);
    cout<<"Enter id: ";
    cin>>eid;

    cout<<"Enter name: ";
    cin.ignore();
    getline(cin, ename);

    cout<<"Enter salary: ";
    cin>>esalary;
    cout<<endl;

    cout<<"Fulltime Employee id: "<<eid<<endl;
    cout<<"Fulltime Employee name: "<<ename<<endl;
    cout<<"Salary: "<<esalary<<endl;
}