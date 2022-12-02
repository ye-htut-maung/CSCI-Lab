#include <iostream>
using namespace std;

void fillRandom(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        nums[i] = rand() % (100 - 1 +1) + 1;
    }
}

void splitArray(int nums[], int numsSplit[][5], int cap, int row, int col) {
    int k = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            numsSplit[i][j] = nums[k++];
        }
    }
}

void printArray1D(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}
void printArray2D(int numsSplit[][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << numsSplit[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
   int nums[10], numsSplit[2][5];
   srand(time(0));
   fillRandom(nums, 10);
   splitArray(nums, numsSplit, 10, 2, 5);
   printArray1D(nums, 10); // prints elements of 1D array separated by spaces
   printArray2D(numsSplit, 2, 5); // prints elements of 2D array separated by spaces, each row on its own line
   return 0;
 }