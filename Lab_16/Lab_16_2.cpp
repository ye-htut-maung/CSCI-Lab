// Answers:

// line a:
// 2 

// line b:
// 22

// line c:
// 42

// line d:
// 44

// line e:
// 64
// 24

#include <iostream>
using namespace std;

int fun(int &x, int &y) {
    if (y <= 0) return x;
    x = x + 2;
    cout << x << y << endl;
    return x * y;
}

int main() {
    int x = 2, y = 0;
    cout << fun(x, y) << endl; // line a
    fun(y, x); // line b
    fun(x, y); // line c
    fun(y, x); // line d
    cout << fun(x, y) << endl; // line e
    return 0;
}