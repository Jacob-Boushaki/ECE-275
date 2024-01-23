/*
In class work
Jacob Ishak-Boushaki
Dr. Kay
ECE 275
1-23-2024
*/

#include <iostream>
#include <string>
#include <iomanip> // For setprecision
#include <cmath>
#include <vector>
using namespace std;

char get_option();

int main(){
    // vector <int> test(5, -1);
    // test.size();
    // test.resize(10);
    // test.resize(3);
    // test.at();

    // test.push_back(77)
    // int test.back();
    // void pop_back();

    /*
    vector<int> intVect;
    int value, i, max = 0;
    double sum, avg;

    while(1){
        cout << "Enter Value: ";
        cin >> value;
        if (value == 0) break;
        else {
            intVect.push_back(value);
            sum += value;
            if (value > max) max = value;
        }
    }

    for (i = 0; i < intVect.size(); i++){
        cout << intVect.at(i) << endl;
    }
    avg = sum / intVect.size();

    cout << "Max: " << max << endl;
    cout << "Average: " << avg << endl;
    */


    vector<int> jerseyNums(5);
    vector<int> ratingNums(5);
    
    cout << "Enter Jersey number of 5 players: ";
    for (int i = 0; i < 5; i++){
        cin >> jerseyNums.at(i);
    }

    cout << "Enter Rating number of 5 platers: ";
    for (int i = 0; i < 5; i++){
        cin >> ratingNums.at(i);
    }

    
    while(1){
        char option = 'z';
        option = get_option();
    
        if (option == 'o'){
            cout << "Roster" << endl;
            for (int i = 0; i < jerseyNums.size(); i++){
                cout << "Player " << i + 1 << " -- Jersey no. " << jerseyNums.at(i);
                cout << ", Rating: " << ratingNums.at(i) << endl;
            }
        }    

        else if (option == 'q'){
            break;
        }

        else if (option == 'a'){
            int newPlayer, newNumber;
            cout << "Enter new player number: ";
            cin >> newPlayer;
            cout << "Enter new rating: ";
            cin >> newNumber;
            jerseyNums.push_back(newPlayer);
            ratingNums.push_back(newNumber);
        }

        else option = 'z';

    
}
return(0);
}

char get_option() {
    char option;
    cout << "MENU" << endl;
    cout << "a - Add player" << endl;
    cout << "o - Output roster" << endl;
    cout << "q - Quit" << endl;
    cout << "Choose option: ";
    cin >> option;
    return option;
}