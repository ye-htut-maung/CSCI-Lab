#include <iostream>
using namespace std;

void recursiveSequence(int num);
int findNumberFromFunction(int num);

int main() {

    int num;

    cout << "Enter a number between 5 and 20: ";
    cin >> num;

    if (num < 5 || num > 20) {
        cout << "Goodbye";
        return 0;
    }

    recursiveSequence(num);

    return 0;
}

void recursiveSequence(int num) {

    // for (int i = 0; i < num; i++) {
    //     cout << findNumberFromFunction(i) << " ";
    // }

    if (num == 0) {
        return ;
    } else {
        recursiveSequence(num - 1);
        cout << findNumberFromFunction(num - 1) << " ";
    }
}

int findNumberFromFunction(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 2 * findNumberFromFunction(n - 1) + 3;
    }
}