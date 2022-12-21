#include <iostream>
using namespace std;

int fibonacci(int num);

int main() {
    int n = 7;
    cout << " Fibonacci: " << fibonacci(n) << endl;

    return 0;
}

int fibonacci(int num) {
    if (num == 0 || num == 1) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

