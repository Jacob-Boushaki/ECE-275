#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct city{
   string name;
   string state;
   double percent;
};
void init_vector(vector<city>& cityvector);
int main()
{   int i;
	vector<city> all_cities(8);
	
	init_vector(all_cities);  //initialize all_cities vector
    //write your code here
    for (i = 0; i < all_cities.size(); i++){
      if (all_cities.at(i).percent < 8.0){
        cout << all_cities.at(i).name << endl;
        cout << all_cities.at(i).percent << endl;
      }
    }
	return 0;
}
void init_vector(vector<city>& cityvector){
    cityvector.at(0) = {"Cape Coral", "FL", 6.4};	
    cityvector.at(1) = {"Santa Cruz", "CA", 12.5};	
    cityvector.at(2) = {"Westfield", "IN", 7.7};	
    cityvector.at(3) = {"Georgetown", "TX", 14.4};	
    cityvector.at(4) = {"Little Elm", "TX", 8.0};	
    cityvector.at(5) = {"Queen Creek", "AZ", 6.7};	
    cityvector.at(6) = {"Lehi", "UT", 5.6};	
    cityvector.at(7).name = "Leander";	
    cityvector.at(7).state = "TX";	
    cityvector.at(7).percent = 10.9;	
}

