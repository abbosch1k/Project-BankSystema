#include <iostream>
using namespace std;

int main() {

    string pass;
    cin >> pass;

    if(pass == "admin123")
        cout << "Access Granted";
    else
        cout << "Access Denied";

    return 0;
}
