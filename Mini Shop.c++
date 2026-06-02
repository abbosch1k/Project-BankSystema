#include <iostream>
using namespace std;

int main() {

    int choice;
    int total = 0;

    do {

        cout << "\n1. Apple ($2)\n";
        cout << "2. Banana ($1)\n";
        cout << "3. Orange ($3)\n";
        cout << "0. Checkout\n";

        cin >> choice;

        switch(choice) {

            case 1: total += 2; break;
            case 2: total += 1; break;
            case 3: total += 3; break;
        }

    } while(choice != 0);

    cout << "Total: $" << total;

    return 0;
}
