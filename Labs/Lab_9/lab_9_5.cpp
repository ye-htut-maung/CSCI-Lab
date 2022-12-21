#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    int diff_num2_num1;

    cout << "Enter two integers. The second must be at least 20 larger than the first: ";
    cin >> num1;
    cin >> num2;

    diff_num2_num1 = num2 - num1;

    while (diff_num2_num1 < 20) {
        cout << "Invalid input! Try again: ";
        cin >> num1;
        cin >> num2;
        diff_num2_num1 = num2 - num1;
    }

    cout << "The numbers between " << num1 << " and " << num2 << " that are evenly divisible by  2 but not by 3 are: ";
    for (int i = num1; i <= num2; i++) {
        if (i % 3 == 0) {
            continue;
        } else if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}