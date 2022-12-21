#include <iostream>
using namespace std;

int main() {

    int positive_num1, positive_num2;
    int shorter_num;

    cout << "Enter two positive integers: ";
    cin >> positive_num1;
    cin >> positive_num2;

    while (positive_num1 <= 0 || positive_num2 <= 0) {
        cout << "Invalid input. Enter two positive integers: ";
        cin >> positive_num1;
        cin >> positive_num2;
    }

    if (positive_num1 < positive_num2) {
        shorter_num = positive_num1;
    } else {
        shorter_num = positive_num2;
    }

    for (int i = 1; i <= shorter_num; i++) {
        cout << "X";
    }


    return 0;
}