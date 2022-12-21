#include <iostream>
#include <cstdlib>
#include <ctime>
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

    char upper_rand = rand() % (90 - 65 + 1) + 65;
    char lower_rand = rand() % (122 - 97 +1) + 97;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                cout << upper_rand;
            } else if (i % 2 == 0 && j % 2 != 0) {
                cout << lower_rand;
            } else if (i % 2 != 0 && j % 2 == 0) {
                cout << lower_rand;
            } else {
                cout << upper_rand;
            }
        }
        cout << endl;
    }

    return 0;
}