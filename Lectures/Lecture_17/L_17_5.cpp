#include <iostream>
using namespace std;

int recursiveMult(int n1, int n2) {
    if (n2 == 1) {
        return n1;
    } else {
        return n1 + recursiveMult(n1, n2 - 1);
    }
}

int main() {
    int n1 = 3;
    int n2 = 7;

    cout << "Product: " << recursiveMult(n1, n2);


    return 0;
}