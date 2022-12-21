#include <iostream>
using namespace std;

int main() {

    int big_num;
    int small_num_1, small_num_2;

    cout << "Type a big integer n: ";
    cin >> big_num;

    small_num_1 = big_num;

    for (int i = 0; i < 4; i++) {
        cout << "Type a smaller value of n: ";
        cin >> small_num_2;

        if (small_num_1 > small_num_2) {
            small_num_1 = small_num_2;
            continue;
        } else {
            cout << "Goodbye";
            break;
        }
    }

    return 0;
}