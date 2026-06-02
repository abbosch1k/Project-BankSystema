#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> contacts;
    string name;
    int choice;

    do {

        cout << "\n1. Add Contact\n";
        cout << "2. Show Contacts\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Name: ";
                cin >> name;
                contacts.push_back(name);
                break;

            case 2:
                for(string c : contacts)
                    cout << c << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
