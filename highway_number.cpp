/*
Interstate Highway Numbers Exercise
Jacob Ishak-Boushaki
Dr. Kay
ECE-275
1-16-2024
*/

#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>
using namespace std;

int main(){
    while(1){
        int highway;

        //cout << "Enter highway number: ";
        cin >> highway;

        if ( (highway < 1) || (highway > 999) || (highway%100 == 0) ) cout << highway << " is not a valid highway number" << endl;


        else if ( (highway > 0) && (highway < 100) ){
            cout << highway << "is a primary highway";
            if (highway % 2 == 1) cout << " going north/south." << endl;
            else cout << " going east/west." << endl;
        }


        else if ( (highway > 99) && (highway < 1000) ){
            cout << highway << "is an auxiliary highway, serving I-" << (highway%100);
            if (highway % 2 == 1) cout << ", going north/south." << endl;
            else cout << ", going east/west." << endl;
        }
    }
}