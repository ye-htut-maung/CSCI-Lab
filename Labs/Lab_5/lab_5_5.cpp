#include <iostream>
using namespace std;

int main() {

    int num_1, num_2;
    int total;

    cout << "Enter two numbers: ";
    cin >> num_1;
    cin >> num_2;

    total = num_1 + num_2;

    if (total < 100) {
        cout << "false";
    } else {
        cout << "true";
    }

    return 0;
}