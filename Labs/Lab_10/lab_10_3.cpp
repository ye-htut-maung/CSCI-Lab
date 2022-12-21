#include <iostream>
using namespace std;

int main() {

    int odd_num;
    int center, top_half;


    cout << "Enter value for n: ";
    cin >> odd_num;

    if (odd_num % 2 == 0 || odd_num < 1) {
        cout << "The input is invalide";
        return 0;
    }

    center = (odd_num / 2) + 1;
    top_half = odd_num / 2;
    int k = odd_num;

    for (int i = 1; i <= odd_num; i++) {
        for (int j = 1; j <= odd_num; j++) {
            if (j == center && i == center) {
                cout << "*";
                --k;
            } else if (i == j && i <= top_half) {
                cout << "+";
            } else if (i == j && i > top_half) {
                cout << "x";
            } else {

                if (j == k && i <= top_half) {
                    cout << "x";
                    --k;
                } else if (j == k && i > top_half) {
                    cout << "+";
                    --k;
                } else {
                    cout << " ";
                }

            }
        }
        cout << endl;
    }

    return 0;
}