// Arthmetic operation (Addition, Subtraction, Multiplication, Division)
// Giving users to chose one of these operation and asking two number to perform 

#include <iostream>
using namespace std;

int main(){

    cout<<"Menu\n";
    cout<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. Div\n";
        int options;
        cout<<"Choose one option (1-4): ";
        cin>>options;

        int a,b,c;
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    switch(options){
        case 1: c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c=a*b;
        break;
        case 4: c=a/b;
        break;
        default:
        break;
    }

    cout<<c<<endl;

    return 0;
}