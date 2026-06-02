#include <iostream>
using namespace std;

int main() {

    int seats[5] = {0};
    int seat;

    cout << "Choose seat (1-5): ";
    cin >> seat;

    if(seats[seat-1] == 0) {

        seats[seat-1] = 1;
        cout << "Booked!";
    }
    else {

        cout << "Taken!";
    }

    return 0;
}
