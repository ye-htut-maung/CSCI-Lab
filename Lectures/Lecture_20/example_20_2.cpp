#include <iostream>
using namespace std;


int main() {
    int numbers[3][3] = {{1,1,1}, {4,5,6}, {7,8,9}};
    double average[3];
    int rowSum = 0;

    for (int i = 0; i < 3; i++) {
        rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += numbers[i][j];
        }
        average[i] = rowSum / 3.0;
    }

    cout << "Average: ";
    for (int i = 0; i < 3; i++) {
        cout << average[i] << " ";
    }
    


    return 0;
}