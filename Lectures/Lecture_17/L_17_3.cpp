#include <iostream>
using namespace std;

void print_nums(int n);

int main() {

    int n = 4;

    print_nums(n);

    return 0;
}

void print_nums(int n) {
    if (n == 1) {
        cout << 1 << endl;
    } else {
        cout << n << endl;
        print_nums(n - 1);
        
    }
}