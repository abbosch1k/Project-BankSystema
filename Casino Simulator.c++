#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int money = 100;
    int bet;
    int number;

    while(money > 0) {

        cout << "\nMoney: $" << money << endl;

        cout << "Bet: ";
        cin >> bet;

        cout << "Choose number (1-5): ";
        cin >> number;

        int lucky = rand() % 5 + 1;

        if(number == lucky) {

            cout << "You won!\n";
            money += bet;
        }
        else {

            cout << "You lost! Lucky number was "
                 << lucky << endl;

            money -= bet;
        }
    }

    cout << "Game Over!";
    return 0;
}
