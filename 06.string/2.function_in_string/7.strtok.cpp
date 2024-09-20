// strtok(str, "symbol"): used to tokenize string based on character

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str[]= "x=1;y=2;z=3;";

    char *token = strtok(str, ";");
    while(token != NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL, ";");
    }

    return 0;
}