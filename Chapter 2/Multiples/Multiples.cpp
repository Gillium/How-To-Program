// Multiples.cpp : This program reads in two integers and determines and prints if the first is a multiple of the second.

#include <iostream>

using namespace std;

int main()
{
	int number1, number2;

	cout << "Enter two integers to determine if the first is a muliple of the second: ";
	cin >> number1 >> number2;

	if (number1 % number2 == 0)
	{
		cout << number1 << " is a multiple of " << number2 << endl;
	}

	if (number1 % number2 != 0)
	{
		cout << number1 << " is not a multiple of " << number2 << endl;
	}

	return 0;
}