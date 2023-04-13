//program to convert celcius to fahrenheit
#include <iostream>

using namespace std;

int main()
{
	double	fahrenheit;
	double	celcius;

	cout << "Enter temperature in celcius: " << endl;
	cin >> celcius;
	fahrenheit = (celcius * 1.8) + 32;

	cout << endl;
	cout << "CELCIUS " << celcius << " " << "FAHRENHEIT " << fahrenheit << endl;

	return 0;
}