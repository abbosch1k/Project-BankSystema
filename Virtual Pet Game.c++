#include <iostream>
using namespace std;

int main() {

    int hunger = 50;
    int happiness = 50;
    int choice;

    do {

        cout << "\n=== PET GAME ===\n";
        cout << "Hunger: " << hunger << endl;
        cout << "Happiness: " << happiness << endl;

        cout << "1. Feed\n";
        cout << "2. Play\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                hunger -= 10;
                if(hunger < 0) hunger = 0;
                break;

            case 2:
                happiness += 10;
                break;
        }

    } while(choice != 0);

    return 0;
}
