// check the nature of roots of quadratic equation
// roots = (-b (+,-)sqrt(b^2-4ac))/(2*a)
// d = b^2-4ac

#include <iostream>
#include <cmath>
using namespace std;

int main(){

        int a,b,c,d,r1,r2;
        cout<<"Enter a, b, b: ";
        cin>>a>>b>>c;

        d=b*b-4*a*c;

        if(d==0){
            cout<<"Roots are real and equal."<<endl;
            cout<<endl<<(-b/(2*a));
        }

        else{

            if(d>0){
                cout<<"Roots are real and unequal."<<endl;
                cout<<endl<<(-b+(sqrt(d))/(2*a));
                cout<<endl<<(-b-(sqrt(d))/(2*a));
            }

            else{
                cout<<"Roots are imaginary"<<endl;
            }

        }

        return 0;
}