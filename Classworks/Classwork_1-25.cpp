/*
In class work
Jacob Ishak-Boushaki
Dr. Kay
ECE 275
1-25-2024
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct student {
    string firstname;
    string lastname;
    vector <int> exam = { 0,0,0 };
    float averageGrade = 0.0;
    char finalgrade;
};

int exercize1();
int exercize2();
void exactChange(int userTotal, vector<int> &coinVals);
void initialize_Class(vector<student>& Class);

int main() {
    while(1){
        int mode = 0;
        cout << "Perform Exercize (): ";
        cin >> mode;
        if ( (mode != 1) && (mode != 2) && (mode != 3) && (mode != 4) ) mode = 0;

        switch (mode){
            case 1: exercize1();
            case 2: exercize2();
            //case 3: exercize3();
            //case 4: exercize4();
            default: cout << "Invalid Input, try again" << endl;
        }
    }
    return(0);
}


void exactChange (int userTotal, vector<int> &coinVals){
    coinVals.at(3) = userTotal / 25;
    userTotal -= coinVals.at(3) * 25;

    coinVals.at(2) = userTotal / 10;
    userTotal -= coinVals.at(2) * 10;

    coinVals.at(1) = userTotal / 5;
    userTotal -= coinVals.at(1) * 5;

    coinVals.at(0) = userTotal;
}


int exercize1(){
    int inputVal;
    vector<int> changeAmount(4); // p,n,d,q

    cout << "Enter Money: ";
    cin >> inputVal;

    if (inputVal == 0) cout << "No change\n";

    else {
        exactChange(inputVal, changeAmount);

        if (changeAmount.at(3) > 0) {
            cout << "Quarters: " << changeAmount.at(3) << endl;
        }
        if (changeAmount.at(2) > 0) {
            cout << "Dimes: " << changeAmount.at(2) << endl;
        }
        if (changeAmount.at(1) > 0) {
            cout << "Nickles: " << changeAmount.at(1) << endl;
        }
        if (changeAmount.at(0) > 0) {
            cout << "Pennies: " << changeAmount.at(0) << endl;
        }
    }    
    return (0);    
}



int exercize2() {
    vector <student> Class(5);
    initialize_Class(Class);
    //write your code here
    for(int i = 0; i < Class.size(); i++){
        float sum = 0;
        for(int j = 0; j < Class.at(i).exam.size(); j++){
            sum += Class.at(i).exam.at(j);
            Class.at(i).averageGrade = (sum / Class.at(i).exam.size());
        }       
    }

    for(int i = 0; i < Class.size(); i++){
        cout << Class.at(i).lastname << "\t" << Class.at(i).firstname << "\t\t";
        for(int j = 0; j < Class.at(i).exam.size(); j++){
            cout << Class.at(i).exam.at(j) << "\t";
        }
        cout << endl;
    }


    return 0;
}


void initialize_Class(vector<student>& Class) {
    Class.at(0).firstname = "Barrett"; Class.at(0).lastname = "Edan";
    Class.at(0).exam = { 70,45,59 };
    Class.at(1).firstname = "Bradshaw"; Class.at(1).lastname = "Reagan";
    Class.at(1).exam = { 96,97,88 };
    Class.at(2).firstname = "Charlton"; Class.at(2).lastname = "Caius";
    Class.at(2).exam = { 73,94,80 };
    Class.at(3).firstname = "Mayo"; Class.at(3).lastname = "Tyrese";
    Class.at(3).exam = { 88,61,36 };
    Class.at(4).firstname = "Stern"; Class.at(4).lastname = "Brenda";
    Class.at(4).exam.at(0) = 90; Class.at(4).exam.at(1) = 86;
    Class.at(4).exam.at(2) = 45;
}

