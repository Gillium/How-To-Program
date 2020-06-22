// Arithmetic, Smallest and Largest.cpp : This program inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of the numbers.

#include <iostream>

using namespace std;

int main()
{
	int number1, number2, number3, sum, average, product, smallest, largest;

	cout << "Input three different integers: ";
	cin >> number1 >> number2 >> number3;

	sum = number1 + number2 + number3;
	average = sum / 3;
	product = number1 * number2 * number3;

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

	cout << "Sum is " << sum << endl;
	cout << "Average is " << average << endl;
	cout << "Product is " << product << endl;
	cout << "Smallest is " << smallest << endl;
	cout << "Largest is " << largest << endl;
}
