#include <iostream>
using namespace std;

int useRecursion(int n) {
    if (n < 10) {
        return n;
    } else if (n < 100) {
        return (n % 10) + (n / 10);
    } else {
        return useRecursion(n / 10);
    }
}

int main() {
    cout << useRecursion(567982) << endl; // prints 11
    cout << useRecursion(107982) << endl; // prints 1
    cout << useRecursion(7) << endl; // prints 7
    return 0;
}