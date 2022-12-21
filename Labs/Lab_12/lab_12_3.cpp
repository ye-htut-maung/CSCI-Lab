#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    int num;
    int counter_1;
    int rand_num;
    cout << "Enter a number of row: ";
    cin >> num;

    if (num <= 0) {
        cout << "Invalid input. We are not playing the game.";
        return 0;
    }

    srand(time(0));

    for (int i = 1; i <= num; i++) {
        rand_num = 1 + (rand() % 6);
        cout << "Roll " << i << ": " << rand_num << endl;
        if (rand_num == 1) {
            counter_1++;
        }
    }

    cout << "Total number of ones rolled: " << counter_1;
    return 0;
}