/*
Compounding Interest Exercise
Jacob Ishak-Boushaki

SIE 265
1-16-2024
*/

#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>
using namespace std; // This has to go here for some reason
#define HALF_LIFE 6

/* 
As a reminder: A = Pe^(rt)
*/
// 2 million 40 years 12%apr 170$

int main(){
    cout << fixed << setprecision(2);
    double principle;
    double interest_rate;
    double final_amount;
    double years;
    double r;

    while(1){
        cout << "Enter Principal amount: " << endl;
        cin >> principle;

        cout << "Enter Interest APR percent: " << endl;
        cin >> interest_rate;
        r = (interest_rate / 100);

        cout << "For how many years: " << endl;
        cin >> years;

        final_amount = principle * exp(r*years);

        cout << "Final amount: $" << final_amount << endl;

        // Monthly contributions?
        // Compounded continuously? Monthly? Yearly?
    }
}