#include<iostream>
using namespace std;

int totalSum(int n);

int main() {

    int n = 5;
    cout << "Sum: " << totalSum(n);

    return 0;
}

int totalSum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + totalSum(n-1);
    }
}