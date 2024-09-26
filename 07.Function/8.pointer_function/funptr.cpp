// FPOINTER TO A FUNCTION 

#include <iostream>
using namespace std;

int max_fun(int x, int y){
    return x>y ?x:y;
}

int min_fun(int x, int y){
    return x<y ?x:y;
}

int main(){
    int (*funptr)(int, int);
    funptr = max_fun;
    cout<<max_fun(20,30)<<endl;

    funptr = min_fun;
    cout<<min_fun(10,20)<<endl;;
    

    return 0;
}