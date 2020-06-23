// Car-Pool Savings Calculator.cpp : This program calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling.

#include <iostream>

using namespace std;

int main()
{
	int milesPerDay, costPerGallon, averageMilesPerGallon, parkingFees, tolls, costPerDay;

	cout << "Enter total miles driven per day: ";
	cin >> milesPerDay;
	cout << "Enter cost per gallon of gasoline: ";
	cin >> costPerGallon;
	cout << "Enter average miles per gallon: ";
	cin >> averageMilesPerGallon;
	cout << "Enter parking fees per day: ";
	cin >> parkingFees;
	cout << "Enter tolls per day: ";
	cin >> tolls;

	costPerDay = ((milesPerDay / averageMilesPerGallon) * costPerGallon) + parkingFees + tolls;

	cout << "You spend about $" << costPerDay << " per day." << endl;

	return 0;
}
