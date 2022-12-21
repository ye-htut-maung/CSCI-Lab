#include <iostream>
#include <cmath>
using namespace std;

double quadratic(double a, double b, double c, double x);

int main() {
    double a = 1.0, b = 2.2, c = 1.21, x = 0.1;
    cout << quadratic(a, b, c, x) << endl;
    return 0;
}

double quadratic(double a, double b, double c, double x) {
    double ans;
    ans = (a * (pow(x, 2))) + (b * x) + c;
    return ans;
}