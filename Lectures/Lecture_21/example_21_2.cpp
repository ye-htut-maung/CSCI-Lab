#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));

    int numbers[5][5];
    int odd_numbers[5];

    for (int i = 0; i < 5; i++) {
        odd_numbers[i] = 0;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            numbers[i][j] = rand() % (99 - 10 + 1) + 10;
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (numbers[i][j] % 2 == 1) {
                odd_numbers[i]++;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << odd_numbers[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (numbers[i][j] % 2 == 1) {
                cout << numbers[i][j] << " ";
            }
        }
        cout << endl;
    }




    return 0;
}