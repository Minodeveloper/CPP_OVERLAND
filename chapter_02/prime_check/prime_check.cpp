// a program to check if a number is prime or not

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "----------------CHECK IF PRIME OR NOT----------------" << endl;
    cout << endl;

    int number;
    bool prime = true;
    cout << "ENTER A NUMBER :";
    cin >> number;

    for (size_t i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0) 
        {
            prime = false;
            break;
        }
    }

    if (prime)
    {
        cout << number << " is prime." << endl;
    }
    else
    {
        cout << number << " is not prime." << endl;
    }

}

