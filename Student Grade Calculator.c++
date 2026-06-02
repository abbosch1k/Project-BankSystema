#include <iostream>
using namespace std;

int main() {

    int m1, m2, m3;

    cin >> m1 >> m2 >> m3;

    double avg = (m1 + m2 + m3) / 3.0;

    cout << "Average: " << avg << endl;

    if(avg >= 90)
        cout << "Grade A";
    else if(avg >= 75)
        cout << "Grade B";
    else if(avg >= 60)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}
