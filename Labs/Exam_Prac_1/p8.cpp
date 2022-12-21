#include <iostream>
using namespace std;

int main() {

    int n, num;
    int total = 0;
    cout << "Enter an integer: ";
    cin >> n;

    cout <<  "Now enter " << n << " more numbers: ";
    for (int i = 1; i <= n; i++) {
        cin >> num;
        total += num;
    }

    cout << "Their average is " << (double)total / n;


    return 0;
}