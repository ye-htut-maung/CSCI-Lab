#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    int smaller_num, larger_num;

    cout << "Enter two positive integers: ";
    cin >> num1;
    cin >> num2;

    if (num1 < 0 || num2 < 0) {
        cout << "Invalid input! Goodbye.";
        
    } else {
        if (num1 < num2) {
            cout << num1 << " is the smallest and " << num2 << " is the largest." << endl;
            smaller_num = num1;
            larger_num = num2;
        } else if (num1 > num2) {
            cout << num2 << " is the smallest and " << num1 << " is the largest." << endl;
            smaller_num = num2;
            larger_num = num1;
        } else {
            cout << num1 << " and " << num2 << " are the same.";
            smaller_num = num1;
            larger_num = num2;
        }

        for (int i = 0; i < larger_num; i++) {
            cout << "*";
        }
        cout << endl;
        for (int i = 0; i < smaller_num; i++) {
            cout << "*" << endl;
        }

    } 


    return 0;
}