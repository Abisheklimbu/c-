// FUNCTIONS IN CLASS STRING 

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str1= "Hello";

// 1. s.length() -- gives length of string 
    cout<<"Length of str1 is "<<str1.length()<<endl;


// 2. s.size() -- same as length 
    cout<<"Size of str1 is "<<str1.size()<<endl;


// 3. s.capacity -- gives capacity of a string
    cout<<"Capacity of str1 is "<<str1.capacity()<<endl;


// 4. s.resize(50) -- changing capacity size of string 
    str1.resize(50);
    cout<<"Capacity of str1 is after resizing "<<str1.capacity()<<endl;


// 5. s.max_size -- maximum size of possible string you can have 
    cout<<"Maximum size of string you can have is "<<str1.max_size()<<endl;


// 6. s.clear() -- used to clear string value 
    // str1.clear()


// 7. s.empty() -- check string is empty or not 
    if (str1.empty())
    {
        cout<<"String is empty"<<endl;
    }
    else
    {
        cout<<"String is not empty"<<endl;
    }


// 8. s.append() -- used to add another string at last at same string 
    str1.append(" World");
    cout<<"str1 after appeding: "<<str1<<endl;


// 9. s.insert(3, "kk") -- used to add string at given index(3)
    string str2 = "Program";
    str2.insert(7,"s");
    cout<<"Adding 's' at index(7) in str2: "<<str2<<endl;


// 10. s.replace(3,2,"aa") -- used to replace value of index(3) by ("aa") and takes 2 place
    str2.replace(7,1,"med");
    cout<<"'s' is replaced by 'ed' in programs: "<<str2<<endl;


// 11. s.erase() -- same as s.clear() remove string value
    // str2.erase()


// 12. s.push_back("z") -- adds one character at the end of a string
    str2.push_back('.');
    cout<<"In str2 '.' is added at back of programmed: "<<str2<<endl;


// 13. s.pop_back() -- remove last latter from string 
    str2.pop_back();
    cout<<"Removed '.' from Programmed.: "<<str2<<endl;


// 14. s1.swap(s2) -- swap value of string1 with string2
    string str3 = "Abishek";
    string str4 = "Limbu";

    cout<<"Before s.swap()"<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;

    str3.swap(str4);
    cout<<"After s.swap()"<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    


    return 0;
}