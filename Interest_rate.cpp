/*
Compounding Interest Exercise
Jacob Ishak-Boushaki
Dr. Shafae
SIE 265
1-16-2024

This is a tool I spent the past day making as an exercise in C++
This is the first real C++ project I made from scratch, just for fun
I like how it not only works perfectly, but it's apealing visually
I tried to impliment standard c++ style conventions
with readability and ease of understanding being my priorities
*/

#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>
using namespace std; // This has to go here for some reason


double mode_1(double principal); // Continuous compounding
double mode_2(double principal); // Compounded Monthly
double mode_3(double principal); // Compounded Yearly
double display_result(double final_amount); // For outputting final amount

int main(){
    cout << fixed << setprecision(2);

    while(1){
        double principal = 0.0;
        char mode = 'Z';
        cout << "Enter Principal amount: " << endl;
        cin >> principal;

        cout << "Compounded?" << endl;
        cout << "1) Continuously" << endl;
        cout << "2) Monthly" << endl;
        cout << "3) Yearly" << endl;
        cin >> mode;
        if ( (mode != '1') && (mode != '2') && (mode != '3') ) mode = 'Z';

        switch (mode) {
            case 'Z': cout << "Invalid input. Try again." << endl; break;
            case '1': display_result(mode_1(principal)); break;
            case '2': display_result(mode_2(principal)); break;
            case '3': display_result(mode_3(principal)); break;
            default: cout << "Invalid input. Try again." << endl; break;
        }
        // Monthly contributions?
        // Compounded continuously? Monthly? Yearly?        
    }
    return(0);
}


double mode_1(double principal) { // Continous compounding
    // As a reminder: A = Pe^(rt)
    double interest_rate = 0.0;
    double years = 0.0;
    double r = 0.0;

    cout << "Enter yearly APR: ";
    cin >> interest_rate;    
    cout << "For how many years: ";
    cin >> years;
    r = (interest_rate / 100);

    return principal * exp(r*years);
}


double mode_2(double principal) { // Compounded Monthly
    /*
    FV = P*( [ 1 + r ]^n - 1)*(1 / r) + principal * (1 + r)^n
    FV is the future value of the investment, including contributions and interest.
    Principle is self explanatory.
    P is the monthly contribution.
    r is the monthly interest rate (annual interest rate divided by 12).
    n is the total number of periods (number of years multiplied by 12).
    */
    double P = 0.0;
    double r = 0.0;
    double n = 0.0;

    cout << "Monthly contribution: ";
    cin >> P;
    cout << "Enter Yearly APR: ";
    cin >> r; r/=12; r/=100;
    cout << "For how many years: ";
    cin >> n; n*=12;

    return P * ((pow(1 + r, n)) - 1 ) * (1 / r) + principal * pow(1 + r, n);
}


double mode_3(double principal) { // Compounded Yearly
    /*
    FV = P*( [ 1 + r ]^n - 1)*(1 / r) + principal * (1 + r)^n
    FV is the future value of the investment, including contributions and interest.
    Principle is self explanatory.
    P is the yearly contribution (monthly conribution multiplied by 12).
    r is the yearly interest rate
    n is the number of years.
    */
    double P = 0.0;
    double r = 0.0;
    double n = 0.0;

    cout << "Monthly contribution: ";
    cin >> P; P*=12;
    cout << "Enter Yearly APR: ";
    cin >> r; r/=100;
    cout << "For how many years: ";
    cin >> n;

    return P * ((pow(1 + r, n)) - 1 ) * (1 / r) + principal * pow(1 + r, n);
}


double display_result(double final_amount) { // For outputting final amount
    cout << "Final amount: $" << final_amount << endl;
}