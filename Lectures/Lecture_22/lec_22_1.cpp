#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (100 - 1 + 1) + 1;
    }
}

void fillArray2D(int arr[][2], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand() % (100 - 1 + 1) + 1;
        }
    }
}

void printArray(int x[], int cap){
  for(int i = 0; i < cap; i++){
     cout << x[i] << " ";
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

int main() {

    int numbers[4];
    int num_2D[4][2];

    fillArray(numbers, 4);

    fillArray2D(num_2D, 4, 2);

    printArray(numbers, 4);

    printArray2D(num_2D, 4, 2);


    return 0;
}