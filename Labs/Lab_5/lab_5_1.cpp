#include <iostream>
using namespace std;

int main() {


    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    if (num1 > num2 && num2 > num3) {
        cout << "Decreasing";
    } else if (num1 < num2 && num2 < num3) {
        cout << "Increasing";
    } else {
        cout << "Neither";
    }
    return 0;
}