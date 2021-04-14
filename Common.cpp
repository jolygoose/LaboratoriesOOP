#include <iostream>

using namespace std;

int GetCorrectIntegerValue()
{
	int inputIntegerValue;
	while (true)
	{
		if (cin >> inputIntegerValue)
		{
			break;
		}
		cerr << "Error: Incorrect value, try again.";
		cout << endl << endl;
		cin.clear();
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	}
	cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	return inputIntegerValue;
}

double GetCorrectDoubleValue()
{
	double inputDoubleValue;
	while (true)
	{
		if (cin >> inputDoubleValue)
		{
			break;
		}
		cerr << "Error: Incorrect value, try again.";
		cout << endl << endl;
		cin.clear();
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	}
	cin.ignore(numeric_limits <streamsize> ::max(), '\n');
	return inputDoubleValue;
}

int GetCorrectUnsignedIntegerValue()
{
	int temporaryValue = GetCorrectIntegerValue();
	while (temporaryValue < 0)
	{
		cerr << "Error: Value cannot be less than zero" << endl;
		temporaryValue = GetCorrectIntegerValue();
	}
	return temporaryValue;
}