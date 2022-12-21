// Answers:

// line a: 
// 5

// line b: 
// 62

// line c:
// 02

// line d:
// 17

// line e:
// 73
// 21

#include <iostream>
using namespace std;

int fun(int &x, int y) {
    if (y <= 0) return x;
    x = x + 1;
    y = y + 1;
    cout << x << y << endl;
    return x * y;
}

int main() {
    int x = 5, y = -1;
    cout << fun(x, y) << endl; // line a
    fun(x, 1); // line b
    fun(y, 1); // line c
    fun(y, x); // line d
    cout << fun(x, 2) << endl; // line e
    return 0;
}
