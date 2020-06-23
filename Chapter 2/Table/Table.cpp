// Table.cpp : This program calculates the squares and cubes of the intergesr from 0 to 10. We use tabs to print a neatly formatted table of values.

#include <iostream>

using namespace std;

int main()
{
	int integer0 = 0, integer1 = 1, integer2 = 2, integer3 = 3,
		integer4 = 4, integer5 = 5, integer6 = 6, integer7 = 7,
		integer8 = 8, integer9 = 9, integer10 = 10;

	cout << "integer\tsquare\tcube" << endl;
	cout << integer0 << "\t" << integer0 * integer0 << "\t" << integer0 * integer0 * integer0 << endl;
	cout << integer1 << "\t" << integer1 * integer1 << "\t" << integer1 * integer1 * integer1 << endl;
	cout << integer2 << "\t" << integer2 * integer2 << "\t" << integer2 * integer2 * integer2 << endl;
	cout << integer3 << "\t" << integer3 * integer3 << "\t" << integer3 * integer3 * integer3 << endl;
	cout << integer4 << "\t" << integer4 * integer4 << "\t" << integer4 * integer4 * integer4 << endl;
	cout << integer5 << "\t" << integer5 * integer5 << "\t" << integer5 * integer5 * integer5 << endl;
	cout << integer6 << "\t" << integer6 * integer6 << "\t" << integer6 * integer6 * integer6 << endl;
	cout << integer7 << "\t" << integer7 * integer7 << "\t" << integer7 * integer7 * integer7 << endl;
	cout << integer8 << "\t" << integer8 * integer8 << "\t" << integer8 * integer8 * integer8 << endl;
	cout << integer9 << "\t" << integer9 * integer9 << "\t" << integer9 * integer9 * integer9 << endl;
	cout << integer10 << "\t" << integer10 * integer10 << "\t" << integer10 * integer10 * integer10 << endl;

	return 0;
}