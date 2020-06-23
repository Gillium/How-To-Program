// Digits of an Integer.cpp : This program inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each

#include <iostream>

using namespace std;

int main()
{
	int number, digit1, digit2, digit3, digit4, digit5;

	cout << "Enter five-digit integer: ";
	cin >> number;

	digit1 = number / 10000;
	number %= 10000;
	digit2 = number / 1000;
	number %= 1000;
	digit3 = number / 100;
	number %= 100;
	digit4 = number / 10;
	digit5 = number % 10;

	cout << endl << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << endl;

	return 0;
}
