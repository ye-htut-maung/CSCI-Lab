#include <iostream>
using namespace std;

double averageThreeNums(int a, int b, int c);
int maximum(int num1, int num2);
int lastDigit (int num);


int main() {

    int a = 3, b = 4, c = 5;
    double average = averageThreeNums(a, b, c);
    cout << average << endl;

    int x = 0, y = 1, z = 2;
    x = maximum(x + z, y - x); // sets x as maximum value
    cout << x << endl;

    int n = 19836;
    cout << lastDigit(n) << endl; 

    return 0;
}

double averageThreeNums(int a, int b, int c) {

    int total  = a + b + c;
    double average = total / 3.0;

    return average;
}

int maximum (int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int lastDigit (int num) {
    return num % 10;
}