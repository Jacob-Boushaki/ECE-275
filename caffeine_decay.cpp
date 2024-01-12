/*
Caffeine Decay Exercise
Jacob Ishak-Boushaki
Dr. Kay
ECE-275
1-11-2024
*/

#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>
using namespace std; // This has to go here for some reason
#define HALF_LIFE 6

/* 
As a reminder: A = Pe^(-rt)
Caffeine has a half life of about 6 hours in the human body
r = ln(2) / λ ≈≈ 0.1155 in this example
*/


int main(){
    cout << fixed << setprecision(4);
    double CaffeineMgInit; // Our Principle Amount
    double CaffeineMGFinal;
    double hours;
    float r = log(2) / HALF_LIFE;
    char go = 'y';

    while (go == 'y'){

        cout << "Enter Initial Caffeine consumption: ";
        cin >> CaffeineMgInit;
        cout << "Enter Hours since consumption: ";
        cin >> hours;

        CaffeineMGFinal = CaffeineMgInit * exp(-r * hours);

        cout << "Final Caffeine amount in MG: " << CaffeineMGFinal << endl;

        cout << "Go again? y or n: ";
        cin >> go;
        if ((go != 'y') && (go != 'n')) go = 'y';
    }
}