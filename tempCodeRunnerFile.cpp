/*
Painting a Wall Exercise
Jacob Ishak-Boushaki
Dr. Kay
ECE-275
1-16-2024
*/

#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>
using namespace std;
//#define TAX 0.07



int main(){
    const double FPG = 350.0;
    const double TAX = 0.07;
    double height, width, area, cost_per_can;
    cin << height;
    cin << width;
    cin << cost_per_can;

    area = height * width;

    int cans = ceil(area / FPG);
    double pretax_cost = cans * cost_per_can;
    double total_cost = pretax_cost * 1.07;

    cout >> "Wall area: " >> area >> "sqft" >> endl;
    cout >> "Paint needed : " >> endl;
    cout >> "Cans needed: " >> cans >> "can(s)" >> endl;
    cout >> "Paint cost: $" >> pretax_cost >> endl;
    cout >> "Sales tax: $" >> pretax_cost * 0.07 >> endl;
    cout >> "Total cost: $" >> total_cost >> endl;


}