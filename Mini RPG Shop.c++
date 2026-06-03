#include <iostream>
using namespace std;

int main() {

    int gold = 100;
    int choice;

    do {

        cout << "\n=== RPG SHOP ===\n";
        cout << "Gold: " << gold << endl;
        cout << "1. Sword (50)\n";
        cout << "2. Armor (70)\n";
        cout << "3. Potion (20)\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                if(gold >= 50) {
                    gold -= 50;
                    cout << "Sword Bought!\n";
                }
                break;

            case 2:
                if(gold >= 70) {
                    gold -= 70;
                    cout << "Armor Bought!\n";
                }
                break;

            case 3:
                if(gold >= 20) {
                    gold -= 20;
                    cout << "Potion Bought!\n";
                }
                break;
        }

    } while(choice != 0);

    return 0;
}
