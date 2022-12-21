#include <iostream>
using namespace std;

bool unlucky(int x) {
    if (x < 10) {
        return false;
    } else if (x < 100) {
        if (((x / 10) + (x % 10)) == 13) {
            return true;
        } else {
            return false;
        }
    } else {
        return unlucky(x/ 10);
    }
}

int main() {
    int x = 6789;
    if (unlucky(x)) cout << x << " is Unlucky!\n"; // prints 6789 is Unlucky!
    x = 6889;
    if (unlucky(x)) cout << x << " is Unlucky!\n"; // prints
    x = 6;
    if (unlucky(x)) cout << x << " is Unlucky!\n"; // prints
    x = 49;
    if (unlucky(x)) cout << x << " is Unlucky!\n"; // prints 49 is Unlucky!
    return 0;
}