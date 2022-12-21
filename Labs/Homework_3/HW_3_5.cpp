#include <iostream>
using namespace std;

int findLargest(int num1, int num2, int num3);
void applyCurve(int &num1, int &num2, int &num3, int curve);

int main() {

    int num1, num2, num3;
    int largest;
    int curve;

    cout << "Enter three scores: ";
    cin >> num1 >> num2 >> num3;

    largest = findLargest(num1, num2, num3);

    curve = 100 - largest;
    cout << "The curve is " << curve << "." << endl;

    applyCurve(num1, num2, num3, curve);

    cout << "The scores after applying the curve are " << num1 << ", " << num2 << ", " << num3 << ".";
    return 0;
}

int findLargest(int num1, int num2, int num3) {
    int largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    return largest;
}

void applyCurve(int &num1, int &num2, int &num3, int curve) {
    num1 += curve;
    num2 += curve;
    num3 += curve;
}