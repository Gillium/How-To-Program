// Diameter, Circumference and Area of a Circle.cpp : This program reads in the radius of a circle as an integer and prints the circle's diameter, circumference and area

#include <iostream>

using namespace std;

int main()
{
	int radius;

	cout << "Enter the radius of the circle: ";
	cin >> radius;
	cout << "The diameter of the circle is " << radius * 2 << endl;
	cout << "The circumference of the circle is " << 2 * radius * 3.14159  << endl;
	cout << "The area of the circle is " << 3.14159 * radius * radius << endl;

	return 0;
}