#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int lucky = rand() % 20 + 1;
    int guess;

    cout << "Guess (1-20): ";
    cin >> guess;

    if(guess == lucky)
        cout << "You Win!";
    else
        cout << "Lucky Number: " << lucky;

    return 0;
}
