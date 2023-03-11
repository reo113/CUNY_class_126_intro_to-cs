// Robert Ortiz
// Lab1b
// 9/22/2021
// Use your program to determine the amount of money available

// step 1. name and declare the variables.
// step 2. enter prompts for the user for each piece of information needed.
// step 3. enter formula to be used to solve the investment question.
// step 4. display output with iomanip properties

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main()
{
 //declare variables
	float amt, years, rate, invest;

//prompts
	cout << "Enter the amount of the intial deposit: ";
	cin >> invest;
	cout << "Enter the amount of investment years: ";
	cin >> years;
	cout << "Enter the interest rate: ";
	cin >> rate;

//Formulas
	amt = invest * pow(1.0 + rate / 100, years);

//Display answer with iomanip properties 
	cout << "Total investment amount:$" << fixed << showpoint << setprecision(2) << amt << endl;



	return 0;



}
