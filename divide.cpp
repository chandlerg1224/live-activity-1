/*
Example: Division by zero fault, not handled.
*/

#include <iostream>
using namespace std;

float divide(float numerator, float denominator)
{
	if(denominator == 0)
	{
		throw std::runtime_error("Divide by zero!!");
	}
	

	return (numerator / denominator);
}

int main()
{
	float numerator;
	float denominator;
	float quotient;

	cout << "Enter the numerator: ";
	cin >> numerator;
	cout << "Enter the denominator: ";
	cin >> denominator;

	quotient = divide(numerator, denominator);
	cout << "The quotient is: " << quotient << endl;
}
