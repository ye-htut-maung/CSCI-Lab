#include <iostream>
using namespace std;

void minMaxMath(int a, int b, int c);
int findMin(int x, int y);
int findMax(int x, int y);

int main() {
    int a = 7, b = 2, c = 4;
    minMaxMath(a, b, c);
    return 0;
}

void minMaxMath(int a, int b, int c) {
    int sum;
    int product;
    int min, max;

    sum = a + b + c;
    product = a * b * c;

    min = findMin(findMin(a, b), c);
    max = findMax(findMax(a, b), c);

    cout << "The sum is " << sum << endl;
    cout << "The product is " << product << endl;
    cout << "The largest number is " << max << endl;
    cout << "The smallest number is " << min << endl;


}

int findMin(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int findMax(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}