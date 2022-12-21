#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        numbers[i] = rand() % (20) + 1;
        cout << numbers[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 10; i++) {
        numbers[i] += 2;
        cout << numbers[i] << " ";
    }

    cout << endl;


    return 0;
}