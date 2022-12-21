#include <iostream>
using namespace std;

int factorial(int num);

int main() {

    int num = 4;
    cout << "Factorial of " << num << ": " << factorial(num); 

    return 0;
}

int factorial(int num) {
    if (num == 1 || num == 0) return 1;
    else return num * factorial(num - 1);
}