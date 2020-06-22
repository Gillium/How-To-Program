// Odd or Even.cpp : This program reads in an integer and determines and prints whether it's odd or even.

#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Enter an integer: ";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << number << " is an even." << endl;
	}

	if (number % 2 != 0)
	{
		cout << number << " is an odd." << endl;
	}

	return 0;
}
