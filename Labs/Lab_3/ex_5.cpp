#include <iostream>
using namespace std;

int main() {

    int pointers_2, pointers_3, total_score;

    cout << "How many 3-pointers?" << endl;
    cin >> pointers_3;

    cout << "How many 2-pointers?" << endl;
    cin >> pointers_2;

    total_score = (pointers_2 * 2) + (pointers_3 * 3);

    cout << "Total points scored: " << total_score;

    return 0;
}