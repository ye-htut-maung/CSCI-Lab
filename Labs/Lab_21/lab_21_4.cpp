#include<iostream>
using namespace std;

int main() {

    int user_num;
    int digit[5];

    cout << "Please enter a five-digit integer: ";
    cin >> user_num;

    for (int i = 4 ; i >= 0; i--) {
        digit[i] = user_num % 10;
        user_num /= 10;
    }

    cout << "The odd digits from left to right are ";

    for (int i = 0; i < 5; i++) {
        if (digit[i] % 2 == 1) {
            cout << digit[i] << " ";
        }
    }

    cout << endl;
    cout << "The even digits from right to left are ";

    for (int i = 4; i >= 0; i--) {
        if (digit[i] % 2 == 0) {
            cout << digit[i] << " ";
        }
    }


    return 0;
}