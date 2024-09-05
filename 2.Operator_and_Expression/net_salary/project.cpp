// calculating net salray 
// formula: net slary = basic salary + basic salary * percentage of allowances - 
                     // basic salary * percentage of deduction

#include <iostream>
using namespace std;

int main(){

        float basic_salary;
        float allowances_per;
        float deduction_per;
        float net_salary;

        cout<<"Enter basic salary ";
        cin>>basic_salary;

        cout<<"Enter percentage of allowances ";
        cin>>allowances_per;

        cout<<"Enter percentage of deduction ";
        cin>>deduction_per;

        net_salary = basic_salary + ( (basic_salary * allowances_per/100) - (basic_salary * deduction_per/100));

        cout<<"Net salary is "<<net_salary<<endl;
}