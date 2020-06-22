// Comparing Integers.cpp : This program asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger."
// if the numbers are equal, it prints the message "These numbers are equal."

#include <iostream>

using namespace std;

int main()
{
	int number1, number2;

	cout << "Enter two integers" << endl;
	cin >> number1 >> number2;

	if (number1 == number2)
	{
		cout << "These numbers are equal." << endl;
	}
	
	if (number1 > number2)
	{
		cout << number1 << " is larger." << endl;
	}

	if (number1 < number2)
	{
		cout << number2 << " is larger." << endl;
	}

	return 0;
}