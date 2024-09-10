// Finding maximum number from given two number using condtional statements 

#include <iostream>
using namespace std;

int main(){

        int x, y;
        cout<<"Enter two numbers: ";
        cin>>x>>y;

        if (x>y){
            cout<<x<<" is greater than "<<y<<endl;
        }
        else{
            cout<<y<<" is greater than "<<x<<endl;
        }

        return 0;
}