#include <iostream>
using namespace std;

int findSumOfTwoLeftMostDigit(int num);

int main() {
    int num = 32598;
    
    cout << "Sum of Left Most Digit: " << findSumOfTwoLeftMostDigit(num) << endl;

    return 0;
}

int findSumOfTwoLeftMostDigit(int num) {
    if (num < 100) {
        return num/10 + num%10;
    } else {
        return findSumOfTwoLeftMostDigit(num/10);
    }
}