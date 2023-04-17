// functionCall
#include <iostream>
#include <cmath>
using namespace std;

void displayAverage(double num1, double num2); 
void isPrime(int number);

int main()
{
    int num1, num2;
    cout << "Enter num1 ";
    cin >> num1;
    cout << "Enter num2 ";
    cin >> num2;
    cout << endl;
    cout << "---------------------------------" << endl;
    displayAverage(double(num1),double(num2));
    isPrime(num1);
    isPrime(num2);
    

    return 0;
}


void displayAverage(double num1, double num2)
{
    cout << "average of " << num1 << " and " << num2 << " is " << double((num1 + num2) / 2) << endl;
}

void isPrime(int number) {
    bool prime = true;
    for (size_t i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0) {
            prime = false;
            break;
        }
      
    }

    if (prime) {
        cout << number << " is prime." << endl;
    }
    else {
        cout << number << " is not prime." << endl;
    }

}
