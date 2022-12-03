#include <iostream>
using namespace std;

int maxElement(int data[], int size) {
    int max = data[0];
    for (int i = 0; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}


int main() {

    int data[5] = {3, 1, 4, 1, 5};
    int ans = maxElement(data, 5);
    cout << ans << endl;


    return 0;
}