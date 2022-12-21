#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    int num;
    int rand_1, rand_2;
    int row, col;
    srand(time(0));

    cout << "Enter a number between 5 and 15 (inclusive): ";
    cin >> num;

    while (num < 5 || num > 15) {
        cout << "Invalid input! Try again: ";
        cin >> num;
    }

    rand_1 = rand() % 10;
    rand_2 = rand() % 10;

    while (rand_1 == rand_2) {
        rand_2 = rand() % 10;
    }

    row = num;
    col = num * 2;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (i == 1 || j == 1 || i == row || j == col) {
                cout << "*";
            } else if (j % 2 == 0) {
                cout << rand_1;
            } else {
                cout << rand_2;
            }
        }
        cout << endl;
    }



    return 0;
}