#include <iostream>
using namespace std;

int findPower(int base, int expo) {
    if (expo == 1) {
        return base;
    } else {
        return base * findPower(base, expo-1);
    }
}

int main() {
    int base = 2, expo = 3;

    cout << "Power: " << findPower(base, expo);
    return 0;

}