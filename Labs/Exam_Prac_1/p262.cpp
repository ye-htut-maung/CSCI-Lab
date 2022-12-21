#include <iostream>
using namespace std;

int main() {

    int x;
    int largest_factor;
    cout <<"Enter";
    cin >> x;

    for (int i = (x-1); i >= 1; i--) {
        if (x % i == 0) {
            largest_factor = i;
            break;
        }
    }
    cout << largest_factor;


    return 0;
}