#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Enter a positive number at most 20: ";
    cin >> n;

    while (n <= 0 || n > 20) {
        cout << "Invalid input! Enter again: ";
        cin >> n;
    }

    char rand1 =  rand() % (90 - 65 + 1) + 65;
    char rand2 =  rand() % (90 - 65 + 1) + 65;

    cout << rand1 << endl << rand2 << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i % 2 == 0 && j % 2 == 0) {
                cout << rand1;
            } else if (i % 2 == 0 && j % 2 != 0) {
                cout << rand2;
            } else if (i % 2 != 0 && j % 2 == 0) {
                cout << rand2;
            } else {
                cout << rand1;
            }
        }
        cout << endl;
    }
    return 0;
}