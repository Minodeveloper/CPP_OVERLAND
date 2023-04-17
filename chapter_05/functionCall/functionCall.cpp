// functionCall
#include <iostream>

using namespace std;

void displayAverage(double num1, double num2); 

int main()
{
    displayAverage(34, 45);

    return 0;
}


void displayAverage(double num1, double num2)
{
    cout << "average of " << num1 << " and " << num2 << " is " << double((num1 + num2) / 2) << endl;
}

