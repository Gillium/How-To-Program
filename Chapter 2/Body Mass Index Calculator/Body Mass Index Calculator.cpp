// Body Mass Index Calculator.cpp : This BMI program reads in the user's weight in pounds and height in inches, then calculates and displays the user's body mass index. The application 
// also displays the information from the Department of Health and Human Services/National Institutes of Health so the user cdan evaluate his/her BMI.

#include <iostream>

using namespace std;

int main()
{
	int weightInPounds, heightInInches, bmi;

	cout << "Enter weight in pounds: ";
	cin >> weightInPounds;
	cout << "Enter height in inches: ";
	cin >> heightInInches;

	bmi = (weightInPounds * 703) / (heightInInches * heightInInches);

	cout << endl << "The BMI is " << bmi << endl;
	cout << "Underweight:\tless than 18.5\n";
	cout << "Normal:\t\tbetween 18.5 and 24.9\n";
	cout << "Overweight:\tbetween 25 and 29.9\n";
	cout << "Obese:\t\t30 or greater\n";

	return 0;
}
