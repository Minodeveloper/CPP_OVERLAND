// a program to check even or oddness of the input nuber

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number : " << endl;
    cin >> number;

    if (number % 2 == 0) 
    {
        cout << number << " is even." << endl;
    }
    else {
        cout << number << " is odd." << endl;
    }
    
}

