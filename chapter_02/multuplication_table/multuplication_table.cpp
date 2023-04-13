// displays multiclipacatn table using while loop
#include <iostream>
using namespace std;
int main()
{
	cout << "-----MULTIPLICATION TABLE-----" << endl;
	cout << endl;

	int number;
	
	cout << "Table of ";
	cin >> number;

	int count = 1;
	while (count < 11) {
		cout << number << "X" << count << " = " << number * count << endl;
		count++;
	}

}

