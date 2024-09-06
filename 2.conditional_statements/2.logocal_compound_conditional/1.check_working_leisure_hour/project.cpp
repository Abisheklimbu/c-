// checking working and leisure hour in a day using compount conditional statement (24 hrs)

#include <iostream>
using namespace std;

int main(){

        int time;
        cout<<"Enter time: ";
        cin>>time;

        if(time>=9 && time<=18){
            cout<<time<<" O'Clock is working hour."<<endl;
        }
        else{
             cout<<time<<" O'Clock is leisure hour."<<endl;
        }

        return 0;
}
