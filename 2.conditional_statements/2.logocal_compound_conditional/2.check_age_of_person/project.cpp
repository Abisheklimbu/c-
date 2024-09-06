// checking age of person child, young, adult
// Toddler = 2-4 yrs. Child = 5-12 yrs. Teen = 13-19 yrs. Adult = 20-39 yrs.

#include <iostream>
using namespace std;

int main(){

        int age;
        cout<<"Enter age: ";
        cin>>age;

        if(age>=2 && age<=4){
            cout<<"You are a toodler."<<endl;
        }
        else if (age>=5 && age<=12){
            cout<<"You are a child."<<endl;
        }
        else if(age>=13 && age<=19){
            cout<<"You are a child."<<endl;
        }      
        else if(age>=20 && age<=39){
            cout<<"You are adult."<<endl;
        }  

        if (age==2 || age<=19){
            cout<<"Eligible for the offer"<<endl;
        }
        else{
            cout<<"Not eligible for the offer"<<endl;
        }


        return 0;
}