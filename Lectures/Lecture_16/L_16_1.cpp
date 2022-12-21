#include <iostream>
using namespace std;

int findLeftMostDigit(int num);

int main() {
    int num = 30598;
    
    cout << "Left Most Digit: " << findLeftMostDigit(num) << endl;

    return 0;
}

int findLeftMostDigit(int num) {
    if (num < 10) {
        return num;
    } else {
        return findLeftMostDigit(num/10);
    }
}