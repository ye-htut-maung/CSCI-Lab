#include <iostream>
#include <cmath>
using namespace std;

int numberOdd(int x, int y);
int closest(double x);
int max(int a, int b, int c, int d);
int firstDigit(int x);

int main() {
   // (a) Print the number of odd arguments, here 1
   cout << numberOdd(7,8) << endl;
   // (b) Print closest integer here 4
   cout << closest(3.75) << endl;
   // (c) Print maximum value, here 4
   cout << max(3, 1, 4, 1) << endl;
   // (d) Print the first digit, assume argument is positive. Here 1.
   cout << firstDigit(19683) << endl;
   return 0;
}

int numberOdd(int x, int y) {
    int counter = 0;
    if (x % 2 != 0) {
        counter++;
    }
    if (y % 2 != 0) {
        counter++;
    }
    return counter;
}

int closest(double x) {
    return round(x);
}

int max(int a, int b, int c, int d) {
    int maximum = a;
    if (b > maximum) {
        maximum = b;
    }
    if (c > maximum) {
        maximum = c;
    }
    if (d > maximum) {
        maximum = d;
    }

    return maximum;
}

int firstDigit(int x) {
    while (x >= 10) {
        x = x / 10;
    }
    return x;
}