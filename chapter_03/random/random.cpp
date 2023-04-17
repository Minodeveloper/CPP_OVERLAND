// random game guesser

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    int random = (rand() % 50) + 1;
    int number;
    bool game = true;
    cout << "Guess the numer:" << endl;
    do
    {
        cin >> number;
        if (random < number) {
            cout << "Too high!" << endl;
        }
        if (random > number) {
            cout << "Too Low!" << endl;
        }
        if (number == random) {
            cout << "WOW! You win." << endl;
            game = false;
        }

    } while (game);

    return 0;
}

