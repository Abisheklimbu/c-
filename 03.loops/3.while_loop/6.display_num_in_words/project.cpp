// displaying number into words eg: 143 = one four three
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, remain1, remain2, rev = 0;
    vector<int> remain2_values;  // Vector to store digits

    cout << "Enter number: ";
    cin >> n;

    // Reverse the number
    while (n > 0) {
        remain1 = n % 10;
        n = n / 10;
        rev = rev * 10 + remain1;
    }

    cout << "Reversed number: " << rev << endl;
    cout << endl;

    // Process each digit of the reversed number
    while (rev > 0) {
        remain2 = rev % 10;
        rev = rev / 10;
        

        remain2_values.push_back(remain2);  // Store each digit in the vector

        // Convert the digit to words using switch
        switch (remain2) {
            case 0: cout << "Zero" << endl; break;
            case 1: cout << "One" << endl; break;
            case 2: cout << "Two" << endl; break;
            case 3: cout << "Three" << endl; break;
            case 4: cout << "Four" << endl; break;
            case 5: cout << "Five" << endl; break;
            case 6: cout << "Six" << endl; break;
            case 7: cout << "Seven" << endl; break;
            case 8: cout << "Eight" << endl; break;
            case 9: cout << "Nine" << endl; break;
        }
    }

    return 0;
}


