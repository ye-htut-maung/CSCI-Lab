#include <iostream>
using namespace std;

int toSeconds(int d, int h, int m);

int main() {
    int d = 5, h = 12, m = 30;
    cout << toSeconds(d, h, m) << endl;
    return 0;
}

int toSeconds(int d, int h, int m) {
    int s = 0;
    h += d * 24;
    m += h * 60;
    s += m * 60;
    return s;
}