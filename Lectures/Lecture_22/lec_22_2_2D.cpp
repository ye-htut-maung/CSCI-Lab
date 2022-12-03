#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void fillArray2D(int arr[][2], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand() % (100 - 1 + 1) + 1;
        }
    }
}



void printArray2D(int x[][2], int row, int col){
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cout << x[i][j] << " ";
    }
    cout << endl;
  } 
}

int maxElement(int data[][2], int row, int col) {
    int max = data[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (data[i][j] > max) {
                max = data[i][j];
            }
        }
    }
    return max;
}

int main() {

    int num_2D[4][2];
    srand(time(0));


    fillArray2D(num_2D, 4, 2);

 

    printArray2D(num_2D, 4, 2);
    cout << endl;

    cout << "Max: " << maxElement(num_2D, 4, 2) << endl;


    return 0;
}