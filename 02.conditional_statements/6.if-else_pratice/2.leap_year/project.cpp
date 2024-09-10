// Taking year from user and checking it is a leap year or not 
// if year id divide by 4,100,400 and answer == 0 its a leap year

#include <iostream>
using namespace std;

int main(){

    int year;
    cout<<"Enter Year: ";
    cin>>year;

    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 == 0){
                cout<<year<<" is a leap year"<<endl;
            }
            else{
                cout<<year<<" is not a leap year."<<endl;
            }
        }
        else{
             cout<<year<<" is a leap year"<<endl;
        }
    }
    else{
        cout<<year<<" is not a leap year."<<endl;
    }

    return 0;
}