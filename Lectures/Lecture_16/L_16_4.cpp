#include <iostream>
using namespace std;

void writeVertical(int num);

int main() {

    int num = 4756;
    writeVertical(num);


    return 0;
}

void writeVertical(int num) {
    if (num < 10) cout << num << endl;
    else {
        // cout << num%10 << endl;
        writeVertical(num / 10);
        cout << num % 10 << endl;
    }
}