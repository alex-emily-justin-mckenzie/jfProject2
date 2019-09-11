//Justin Foster - CS201 Program 2
//September 5, 2018

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Purpose: Take user input and determine how many paint cans they will need to purchase based of the area of the walls of their house.

//Function Delcarations:

int interiorAreaCalculator();//calculates the total area of the interior walls
int exteriorAreaCalculator();//calculates the total area of the exterior walls
int paintNeeded(int area);//calculates the amount of paint cans needed based on total area


int main()
{
	string areaChoice;//user input for interior, exterior, or both
	int paintArea;//used to assign function values to a single variable

	cout << "Welcome to our paint shop!" << endl;
	cout << "Well you be painting the interior, exterior or both?" << endl;
	cin >> areaChoice;


	if (areaChoice == "interior" || areaChoice == "Interior")
	{
		paintArea = interiorAreaCalculator();
		paintNeeded(paintArea);
		exit(0);
	}

	if (areaChoice == "exterior" || areaChoice == "Exterior")
	{
		paintArea = exteriorAreaCalculator();
		paintNeeded(paintArea);
		exit(0);
	}

	if (areaChoice == "both" || areaChoice == "Both")
	{
		paintArea = interiorAreaCalculator() + exteriorAreaCalculator();//combining both functions into a single value for coordination with paintNeeded() function
		cout << "For the interior and exterior both, the total area is: " << paintArea << "." << endl;
		paintNeeded(paintArea);
		exit(0);
	}

	else {}
	{
		cout << "Please enter if you are painting the interior, exterior, or both." << endl;
		cin >> areaChoice;
	}
	return 0;
}


//Function Definitions:

int interiorAreaCalculator()
{
	int walls;//total number of walls being painted
	int width;
	int height;
	int totalArea=0;//variable that gets updated as user adds new walls for total area 


	cout << "How many interior walls will you be painting?" << endl;
	cin >> walls;

	cout << "Okay, you are painting " << walls << " walls today." << endl;

	for (int i = 1; i < walls + 1; i++)//starts at 1 so output for first wall isn't "Wall 0" which sounds weird
	{
		cout << "What is the width for Wall " << i << ": " << endl;
		cin >> width;
		cout << "What is the height for Wall " << i << ": " << endl;
		cin >> height;
		totalArea += (width * height);
		cout << "Current total interior area: " << totalArea << ". " << endl;
	}

	return totalArea;
}
int exteriorAreaCalculator()
{
	int walls;//total number of walls being painted
	int width;
	int height;
	int totalArea = 0;//variable that gets updated as user adds new walls for total area 


	cout << "How many exterior walls will you be painting?" << endl;
	cin >> walls;

	cout << "Okay, you are painting " << walls << " walls today." << endl;

	for (int i = 1; i < walls + 1; i++)//starts at 1 so output for first wall isn't "Wall 0" which sounds weird
	{
		cout << "What is the width for Wall " << i << ": " << endl;
		cin >> width;
		cout << "What is the height for Wall " << i << ": " << endl;
		cin >> height;
		totalArea += (width * height);
		cout << "Current total exterior area: " << totalArea << ". " << endl;
	}

	return totalArea;
}

int paintNeeded(int area)
{
	float paintCan;//how many cans of paint are needed 

	paintCan = 1+(area / 400);// +1 added for rounding purposes

	cout << "You will need " << paintCan << " cans of paint to paint everything you want. Thank you!" << endl;

	return paintCan;
}
