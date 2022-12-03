#include <iostream>
using namespace std;

bool allOdd(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int numbers[5] = {1,3,5,2,9};

    if (allOdd(numbers, 5)) {
        cout << "All odd" << endl;
    } else {
        cout << "not all odd" << endl;
    }


    return 0;
}