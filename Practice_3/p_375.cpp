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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (char) (rand() % (90 - 65 + 1) + 65);
        }
        cout << endl;
    }


    return 0;
}