#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> items;
    int choice;
    string item;

    do {

        cout << "\n=== INVENTORY SYSTEM ===\n";
        cout << "1. Add Item\n";
        cout << "2. Show Items\n";
        cout << "3. Count Items\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Item Name: ";
                cin >> item;
                items.push_back(item);
                break;

            case 2:
                for(int i = 0; i < items.size(); i++)
                    cout << i + 1 << ". " << items[i] << endl;
                break;

            case 3:
                cout << "Total Items: "
                     << items.size()
                     << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
