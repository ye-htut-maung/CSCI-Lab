#include <iostream>
using namespace std;

int main() {

    int odd_num;
    int center, top_half;
    cout << "Enter an odd positive value for n: ";
    cin >> odd_num;
 
    if (odd_num % 2 == 0 || odd_num < 1) {
        cout << "The input is invalide";
        return 0;
    }
    center = (odd_num / 2) + 1;
    top_half = odd_num / 2;

    for (int i = 1; i <= odd_num; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        if (i == center) {
            cout << "*";
        } else if (i <= top_half) {
            cout << "+";
        } else {
            cout << "x";
        }
        cout << endl;
    }

    return 0;
}