#include <iostream>
#include <cmath>
using namespace std;

int diffSquares(int num1, int num2);

int main() {

    int num1 = 4;
    int num2 = 2;
    int ans;

    ans = diffSquares(num1, num2);

    cout << ans;

    return 0;
}

int diffSquares (int num1, int num2) {

    int sq_1, sq_2, diff;

    sq_1 = pow(num1, 2);
    sq_2 = pow(num2, 2);

    diff = sq_1 - sq_2;

    return diff;


}