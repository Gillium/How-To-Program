// Integer Equivalent of a Character.cpp : This program prints the integer equivalent of a character typed in

#include <iostream>

using namespace std;

int main()
{
	char character;

	cout << "Enter the character: ";
	cin >> character;

	cout << "The interger equivalent of " << character << " is " << static_cast<int>(character) << endl;

	return 0;
}
