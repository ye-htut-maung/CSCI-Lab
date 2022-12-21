#include <iostream>
using namespace std;

int main() {

    int positive_num;

    cout << "Enter a positive number: ";
    cin >> positive_num;

    while (positive_num <= 0) {
        cout << "Invalid input! Enter a positive number: ";
        cin >> positive_num;
    }

    for (int i = 1; i <= positive_num; i++) {
        if (i % 2 == 0) {
            cout << -i << " ";
        } else {
            cout << i << " ";
        }
    }

    return 0;
}