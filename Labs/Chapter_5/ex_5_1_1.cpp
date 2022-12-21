#include <iostream>
using namespace std;

int fractorial (int num);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The factorial of " << fractorial(n); << " is " << total;

    return 0;
}

int fractorial (int num) {
    int total = 1;
    for (int i = 1; i <= num; i++) {
        total *= i;
    }
    return total;
}