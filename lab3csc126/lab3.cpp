//Robert Ortiz
// Lab 3
/* Create program that request a full date and outputs whether or not the year is a leap year
and tells you how many days have passed within that time*/

/*Step 1: declare varibles
* step 2: enter prompt
* Step 3. use if and else statements to create leap year formula
* step 4. make leap year formula equal to leap for later use
* step 5.create formula to add one to the days total if the the
year is a leap year and if the day and month entered are greater than february total length
step 6: create else if statements for each month
step 7. create variable x for each month to add to users day total
step 8; outputs both leap year and days passed
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
//declare variables
	int month, day, year, x;
	bool leap = false;

//prompts
	cout << "Please enter a date:";
	cin >> month >> day >> year;
	

//formula for leap year
	if ( (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ) 
	{
		cout << year << " is a leap year" << endl;
		leap = true;
	}
	else
		cout << year << " is not a leap year" << endl;

	//formula for leap year days plus one
	if(((day >= 28 == 0) && (month >= 2)) && (leap)) {
		day = day + 1;
	}

	//conversions of days passed and outputs
		if (month == 1)
	{
		
	day = day;
	cout << "Days Passed in the year:" << day << endl;

	}
		else if (month == 2)
	{

x = 31;
day = x + day;
cout << " Days Passed in the year:" << day << endl;

	}
		else if (month == 3)
		{

x = 59;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 4)
		{

x = 90;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 5)
		{

x = 120;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 6)
		{

x = 151;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 7)
		{

x = 181;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 8)
		{

x = 212;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 9)
		{

x = 243;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 10)
		{

x = 273;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 11)
		{

x = 304;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}
		else if (month == 12)
		{

x = 334;
day = x + day;
cout << "Days Passed in the year:" << day << endl;

		}

	

		return 0;







	

	
}