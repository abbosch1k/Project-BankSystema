#include <iostream>
using namespace std;

int main() {

    int balance = 1000;
    int withdraw;

    cin >> withdraw;

    if(withdraw <= balance) {

        balance -= withdraw;
        cout << "Balance: " << balance;
    }
    else {

        cout << "Not enough money";
    }

    return 0;
}
