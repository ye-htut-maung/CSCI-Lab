#include <iostream>
using namespace std;

int main() {

    int n;
    int numbers[100];

    cout << "Enter a positive integer (at most 100): ";
    cin >> n;

    numbers[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] < 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    for (int i = n -1; i >= 0; i--) {
        if (numbers[i] >= 0) {
            cout << numbers[i] << " ";
        }
    }
    return 0;
}