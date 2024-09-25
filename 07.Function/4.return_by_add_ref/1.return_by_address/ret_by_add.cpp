// RETURN BY ADDRESS (* POINTER )

#include <iostream>
using namespace std;

int * fun(int x){
    int *p = new int[x];
    for(int i=1; i<x; i++){
        p[i] = i+1;
    }
    return p;
}
int main(){

    int *pointer = fun(11);
    for(int i=1; i<11; i++){
        cout<<i<<endl;
    }

    return 0;
}