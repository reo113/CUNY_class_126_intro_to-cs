//Robert Ortiz
//lab2
//9-23-2021
//Determine change and break down

//step 1. declare variables
//step 2. enter prompts 
//step 3. create formula to get change
//step 3. create formula to convert total to pennies
//step 4. divide by 100 determine dollar amt
//step 5. use % to only get the remainder

#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
	// declare varibles
	float check, paid, change;
	int p;

	//prompts
	cout << "Enter the amount of the check:$";
	cin >> check;
	cout << "Enter the amount the customer paid:$";
	cin >> paid;

	//formula
	change = paid - check; 
	cout << "The change is:$" << change << endl;

	//conversions and outputs
	p =(change * 100);  
	cout << p / 100 << " dollar bills" << endl;     

	p = p % 100;                     
	cout << p / 25 << " quarter(s)" << endl;         

	p = p % 25;                           
	cout << p / 10 << " dime(s)" << endl;           

	p = p % 10;                           
	cout << p / 5 << " nickel(s)" << endl;      

	p = p % 5;                       
	cout << p << " penny(s)" << endl;      

	return 0;

}
