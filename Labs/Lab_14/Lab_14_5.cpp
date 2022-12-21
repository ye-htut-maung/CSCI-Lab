#include <iostream>
using namespace std;

double sumRatios(int x, int y);

int main() {
   cout << sumRatios(132, 568) << endl; // prints 0.95
   return 0;
}

double sumRatios(int x, int y) {
    double sum = 0;
    
    while (x != 0) {
        sum += (double)(x % 10) / (y % 10);
        x /= 10;
        y /= 10;
    }
    return sum;
}