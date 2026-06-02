#include <iostream>
using namespace std;

int main() {

    double total = 0;
    double expense;

    while(true) {

        cout << "Expense (0 to exit): ";
        cin >> expense;

        if(expense == 0)
            break;

        total += expense;
    }

    cout << "Total Expenses: $" << total;

    return 0;
}
