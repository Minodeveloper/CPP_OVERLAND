// sum of natural number divisible by 3 and 5 upto a range
#include <iostream>

using namespace std;

int main()
{
    int range;
    int sum = 0;

    cout << "----SUM OF MULTIPLE OF 3 & 5 UPTO RANGE----" << endl << endl;;
    cout << "Enter range --> ";
    cin >> range;
    
    for (int i = 3; i < range; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum += i;
        }
    }
    
    cout << " SUM  = " << sum << endl;

    return 0;
}



