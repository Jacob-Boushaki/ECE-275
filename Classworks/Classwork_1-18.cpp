/*
In class work
Jacob Ishak-Boushaki
Dr. Kay
ECE 275
1-18-2024
*/

#include <iostream>
#include <string>
#include <iomanip> // For setprecision
#include <cmath>
using namespace std;

int exercize1();
int exercize2();
int exercize3();
int exercize4();

int main() {
    while(1){
        int mode = 0;
        cout << "Perform Exercize (1-4): ";
        cin >> mode;
        if ( (mode != 1) && (mode != 2) && (mode != 3) && (mode != 4) ) mode = 0;

        switch (mode){
            case 1: exercize1();
            case 2: exercize2();
            case 3: exercize3();
            case 4: exercize4();
            default: cout << "Invalid Input, try again" << endl;
        }
    }
    return(0);
}


int exercize1() {

    while (1) {
        string input;
        getline(cin, input);

        if(input.at(input.size() - 1) == '?'){
            cout << "A question" << endl;
        }
        else{
            cout << "Not a question" << endl;
        }
    }
    return(0);
}


int exercize2() {

    while(1) {
        string str1, str2;
        cout << "Enter str1: ";
        getline(cin, str1);
        cout << "Enter str2: ";
        getline(cin, str2);

        if (str1 == str2) {
            cout << "Both phrases match\n";
        }

        else if (str1.find(str2) != string::npos) {
            cout << str2 << " is found within " << str1 << endl;
        }

        else if (str2.find(str1) != string::npos) {
            cout << str1 << " is found within " << str2 << endl;
        }

        else {
            cout << "No matches\n";
        }
    }
    return(0);
}


int exercize3() {
    
    while(1){
        string login;
        string first;
        string last;
        int number;

        cout << "Enter first: ";
        getline(cin, first);
        cout << "Enter last: ";
        getline(cin, last);
        cout << "Enter 4 digits: ";
        cin >> number;

        login = last.substr(0, 5) + first.at(0) + to_string(number % 100);
        cout << sizeof(first) << endl;
        cout << "Username: " << login << endl; 
    }
    return(0);
}


int exercize4() {

    while(1){
    cout << fixed << setprecision(2);
    double sum = 0.0;
    double average = 0.0;
    double input  = 1.0;
    double max = 0.0;
    int count = 0;

    while (1) {
        cout << "Enter a number: ";
        cin >> input;
        if (input > max) max = input;
        if (input >= 0){
        sum += input;
        count++;
        }
        else break;
    }
    average = sum / count;
    cout << "Average: " << average << endl;
    cout << "Max: " << max << endl;
    }
    return(0);
}