#include <iostream>
using namespace std;

int findFibonacci(int num) {
    if (num == 0 || num == 1) {
        return num;
    } else {
        return findFibonacci(num - 1) + findFibonacci(num - 2);
    }
}

int main() {

    int num = 7;

    cout << findFibonacci(num);
}