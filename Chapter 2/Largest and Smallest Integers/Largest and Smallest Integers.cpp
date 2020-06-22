// Largest and Smallest Integers.cpp : This program reads in five integerts and determines and prints the largest and the smallest integers in the group.

#include <iostream>

using namespace std;

int main()
{
	int number1, number2, number3, number4, number5, largest, smallest;

	cout << "Enter five integers: ";
	cin >> number1 >> number2 >> number3 >> number4 >> number5;

	if (number1 <= number2)
	{
		smallest = number1;
		largest = number2;
	}

	if (number1 > number2)
	{
		smallest = number2;
		largest = number1;
	}

	if (number3 < smallest)
	{
		smallest = number3;
	}

	if (number3 > largest)
	{
		largest = number3;
	}

	if (number4 < smallest)
	{
		smallest = number4;
	}

	if (number4 > largest)
	{
		largest = number4;
	}

	if (number5 < smallest)
	{
		smallest = number5;
	}

	if (number5 > largest)
	{
		largest = number5;
	}

	cout << "The largest is " << largest << endl;
	cout << "The smallest is " << smallest << endl;

	return 0;
}
