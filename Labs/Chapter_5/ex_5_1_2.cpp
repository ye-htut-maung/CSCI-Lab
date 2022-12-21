#include <iostream>

using namespace std;

void print_out(int num);

int main() {

    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    print_out(n);
    return 0;
}

void print_out(int num) {
    for(int i = 1; i <= num; i++) {
        cout << i << " ";
    }
}