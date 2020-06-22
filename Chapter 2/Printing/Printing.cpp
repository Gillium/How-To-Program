// Printing.cpp : This program prints the numbers 1 to 4 on the same line with each pair of adjeacent numbers separated by one space 3 different ways
#include <iostream>

using namespace std;

int main()
{
	// Using one statement with one stream insertion operator
	cout << "1 2 3 4\n";

	// Using one statment with four stream insertion operator
	cout << "1 " << "2 " << "3 " << "4\n";

	// Using four statements
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4\n";

	return 0;
}