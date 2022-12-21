#include <iostream>
using namespace std;

int main() {

    int positive_num;
    int more_num;
    int odd_counter = 0;

    cout << "Enter a number positive number: ";
    cin >> positive_num;

    while (positive_num <= 0) {
        cout << "Invalid input! Enter a positive number: ";
        cin >> positive_num;
    } 

    cout << "Now enter " << positive_num << " more integers: " << endl;

    for (int i = 1; i <= positive_num; i++) {
        cin >> more_num;

        if (more_num % 2 != 0) {
            ++odd_counter;
        }
    }

    cout << odd_counter << " were odd";

    return 0;
}