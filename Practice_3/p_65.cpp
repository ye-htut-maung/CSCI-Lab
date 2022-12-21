#include <iostream>
using namespace std;

void maxIndex (int first[][4], int second[], int row, int col) {

    int largest;
    int largest_index;

    for (int j = 0; j < col; j++) {
        largest = first[0][j];
        largest_index = 0;
        for (int i = 0; i < row; i++) {
            if (first[i][j] > largest) {
                largest = first[i][j];
                largest_index = i;
            }
        }
        second[j] = largest_index;
    }
}

int main() {
    int first[3][4] = {{99,95,80,16},{25,98,82,17},{10,11,83,15}};
    int second[4];
    maxIndex(first, second, 3, 4);
    for (int i = 0; i < 4; i++) cout << second[i] << " "; // prints 0 1 2 1
    cout << endl;
    return 0;
}
