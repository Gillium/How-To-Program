// Arithmetic.cpp : This program takes two numbers from user and calculates and displays the sum, product, difference and quotient of the two numbers.

#include <iostream>
using namespace std;

int num1, num2, sum, product, difference, quotient;

int main()
{
    cout << "Enter to two numbers to calculate the sum, product, difference and quotient." << endl;
    cin >> num1 >> num2;
    
    sum = num1 + num2;
    product = num2 * num2;
    difference = num1 - num2;
    quotient = num1 / num2;

    cout << endl << "The Sum is " << sum << endl << "The Product is " << product << endl;
    cout << "The Difference is " << difference << endl << "The Quotient is " << quotient << endl;
}