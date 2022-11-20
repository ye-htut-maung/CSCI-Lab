#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    int numbers[15];
    int count_negative = 0;

    srand(time(0));
    for (int i = 0; i < 15; i++) {
        numbers[i] = rand() % (10 - (-10) + 1) + (-10);
        cout << numbers[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 15; i++) {
        if (numbers[i] < 0) {
            ++count_negative;
        }
    }

    cout << "Percentage of negative entries: " << ((double)count_negative/15) * 100.0 << "%";


    return 0;
}