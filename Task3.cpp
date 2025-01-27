#include<iostream>
using namespace std;

int main (){
    int customerid;
    string name;
    int unitconsumed;
    float Tamount,bill, surcharge;
    cout << "Enter CustomerID"<<endl;
    cin >> customerid;
    cout << "Enter Name"<<endl;
    cin >> name;
    cout << "Enter units consumed"<< endl;
    cin>> unitconsumed;
    if (unitconsumed <= 199) {
        bill = unitconsumed * 16.20;
    } else if (unitconsumed >= 200 && unitconsumed<300 ) {
        bill = unitconsumed * 20.10;
    } else if (unitconsumed >= 300 && unitconsumed<500 ) {
        bill = unitconsumed * 27.10;
    } else {
        bill = unitconsumed * 35.90;
    }
    if (bill > 18000) {
        surcharge = bill * 0.15;
        Tamount = bill + surcharge;
    } else {
        Tamount = bill;
    }

    cout << "CustomerID: " << customerid << endl;
    cout << "Name: " << name << endl;
    cout << "Units Consumed: " << unitconsumed << endl;
    cout << "Amount Charges: " << bill << endl;
    cout << "Surcharge Amount: " << surcharge << endl;
    cout << "Total Amount " << Tamount << endl;



}