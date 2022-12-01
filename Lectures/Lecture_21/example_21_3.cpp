#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    int numbers[5][5];
    double average_nums[5];
    int total = 0;

    for (int i = 0; i < 5; i++) {
        total = 0;
        for (int j = 0; j < 5; j++) {
            numbers[i][j] = rand() % (100 - 1 + 1) + 1;
            cout << numbers[i][j] << " ";
            total += numbers[i][j];
        }
        average_nums[i] = (double)total / 5;
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (numbers[i][j] > average_nums[i]) {
                cout << numbers[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}