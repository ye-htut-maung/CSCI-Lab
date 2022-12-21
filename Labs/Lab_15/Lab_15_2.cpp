#include <iostream>

using namespace std;

double countChange(int q, int d, int n, int p);

int main() {

    int q = 10, d = 5, n = 1, p = 2;
    double x = countChange(q, d, n, p);
    cout << "You have $" << x << endl;


    return 0;

}

double countChange(int q, int d, int n, int p) {
    double dollar = 0;
    dollar += q * 0.25;
    dollar += d * 0.1;
    dollar += n * 0.05;
    dollar += p * 0.01;
    return dollar;
}