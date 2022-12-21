#include <iostream>
using namespace std;

void sort(int &x, int &y, int &z); //decreasing order
void swap(int &a, int &b);


int main() {
    int a = 2, b = 7, c = 1;
    sort(a, b, c);
    cout << a << b << c << endl; // prints 721
    return 0;
}

void sort(int &x, int &y, int &z) {
    if (x < y) swap (x, y);
    if (x < z) swap (x, z);
    if (y < z) swap (y, z);
}

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}