// Program that calculated discount on total bill amount. It takes total bill amount and 
// calculated discount amount:
// 1. amount<100 : No discount
// 2. amount>=100 && amount<500 : 10% discount
// 3. amount>500: 20% discount 

// discount_amount = (total amount - discount percent)/100
// Final_amount = total_amount - discount_amount

#include <iostream>
using namespace std;

int main(){

    float total_amount, final_amount, discount_amount;
    cout<<"Enter total bill: ";
    cin>>total_amount;

    if(total_amount<100){
        cout<<"There aren't any discount."<<endl;
        discount_amount= 0;
        cout<<"Final Bil: "<<total_amount<<endl;
    }
    else if(total_amount>=100 && total_amount<500){
        discount_amount= (total_amount *10)/100;
        cout<<"Discount Amount: "<<discount_amount<<endl;
        cout<<"Final Bil: "<<(total_amount-discount_amount)<<endl;
    }
    else if(total_amount >500){
        discount_amount= (total_amount *20)/100;
        cout<<"Discount Amount: "<<discount_amount<<endl;
        cout<<"Final Bill: "<<(total_amount-discount_amount)<<endl;
    }

    return 0;
}