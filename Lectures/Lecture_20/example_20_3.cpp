#include <iostream>
using namespace std;

int main() {

    int numbers[3][3] = {{1,1,7}, {1,2,9}, {3,4,1}};
    int maxSum = 0;
    int maxCol = 0;


    for (int j = 0; j < 3; j++) {
        maxSum += numbers[j][1];
    }
    

    for (int i = 0; i < 3; i++) {
        maxCol = 0;
        for (int j = 0; j < 3; j++) {
            maxCol += numbers[j][i];
        }

        if (maxCol > maxSum) {
            maxSum = maxCol;
        }
    }

    cout << "Max Column: " << maxSum << endl;



    return 0;
}