/* 
STATIC VARIABLE 
It has a local variable scope but remains in memory throught the execution of a program .
*/

#include <iostream>
using namespace std;

void fun(){
    static int y=0;
    int x =20;
    y++;
    cout<<x<<" "<<y<<endl;

}

int main(){
    fun();
    fun();
    fun();

    return 0;
}
