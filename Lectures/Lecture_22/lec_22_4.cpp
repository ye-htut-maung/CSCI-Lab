#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void fillArray2D(int arr[][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand() % (100 - 1 + 1) + 1;
        }
    }
}

void printArray2D(int x[][5], int row, int col){
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cout << x[i][j] << " ";
    }
    cout << endl;
  } 
}

int sumCol(int x [][5], int row, int col, int indexCol) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        sum += x[i][indexCol];
    }
    return sum;
}

int main() {
    srand(time(0));
    int numbers[5][5];
    fillArray2D(numbers, 5,5);
    printArray2D(numbers, 5,5);
    cout << endl;
    int indexCol = 1;
    cout << "The sum of index Column " << indexCol << " is " << sumCol(numbers, 5 ,5, indexCol);
    cout << endl;




    return 0;
}