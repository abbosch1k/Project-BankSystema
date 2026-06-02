#include <iostream>
using namespace std;

int main() {

    int temp;

    cout << "Temperature: ";
    cin >> temp;

    if(temp > 30)
        cout << "Hot";
    else if(temp > 15)
        cout << "Warm";
    else
        cout << "Cold";

    return 0;
}
