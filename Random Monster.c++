#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string monsters[3] = {
        "Zombie",
        "Dragon",
        "Skeleton"
    };

    cout << monsters[rand() % 3];

    return 0;
}
