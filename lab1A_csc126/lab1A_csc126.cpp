// Robert Ortiz
//Lab #1A
//Get the Slope and midpoint of a line 

#include <iostream>
using namespace std;


int main()
{
	//declaring variables
	double x1, x2, y1, y2, Slope, midpoint1, midpoint2;


	//prompts
	cout << "Enter the x coordinate of the first point on a line then press enter:";
	cin >> x1;
	cout << "Enter the y coordinate of the first point on a line then press enter:";
	cin >> y1;
	cout << "Enter the x coordinate of the second point on a line then press enter:";
	cin >> x2;
	cout << "Enter the y coordinate of the second point on a line then press enter:";
	cin >> y2;

	//formulas
	Slope = (y2 - y1) / (x2 - x1);
	midpoint1 = (x1 + x2) / 2;
	midpoint2 = (y1 + y2) / 2;


	//Display the input and the results
	cout << "The first point's coordinate is: (" << x1 << ", " << y1 << ")." << endl;
	cout << "The second point's coordinate is: (" << x2 << ", " << y2 << ")." << endl;
	cout << "The slope of the line is: " << Slope << endl;
	cout << "The midpoint is : (" << midpoint1 << ", " << midpoint2 << ")." << endl;

	return 0;
}