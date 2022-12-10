#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

char randomChar();
void fillCharArray(char arr[][4], int row, int col);
void printArray(char arr[][4], int row, int col);
void vowelsPerRow(char arr[][4], int rowVowelCount[], int row, int col);
void vowelsPerCol(char arr[][4], int colVowelCount[], int row, int col);
void printVowelRows(int rowVowelCount[], int row);
void printVowelCols(int colVowelCount[], int col);

int main() {
    srand(time(0));
    char arr[2][4];
    int rowVowelCount[2] = {0};
    int colVowelCount[4] = {0};
    fillCharArray(arr, 2, 4);
    printArray(arr, 2, 4);
    // fill rowVowelCount with count of vowels per row in arr
    vowelsPerRow(arr, rowVowelCount, 2, 4);
    // fill colVowelCount with count of vowels per row in arr
    vowelsPerCol(arr, colVowelCount, 2, 4);
    printVowelRows(rowVowelCount, 2);
    printVowelCols(colVowelCount, 4);
    return 0;
}


char randomChar() {
    int lowercase_a = (int) 'a';
    int lowercase_z = (int) 'z';
    char ranChar  = (char) (rand() % (lowercase_a - lowercase_z +1) + lowercase_a);
    return ranChar;
}

void fillCharArray(char arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = randomChar();
        }
    }
}

void printArray(char arr[][4], int row, int col) {
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void vowelsPerRow(char arr[][4], int rowVowelCount[], int row, int col) {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int vowelsCounter = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < 5; k++) {
                if (arr[i][j] == vowels[k]){
                    rowVowelCount[i]++;
                }
            }
        }
    }
}

void vowelsPerCol(char arr[][4], int colVowelCount[], int row, int col) {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int vowelsCounter = 0;
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            for (int k = 0; k < 5; k++) {
                if (arr[i][j] == vowels[k]){
                    colVowelCount[j]++;
                }
            }
        }
    }
}

void printVowelRows(int rowVowelCount[], int row) {
    for (int i = 0; i < row; i++) {
        if (rowVowelCount[i] > 0) {
            cout << "Row " << i << " contains at least one vowel." << endl;
        }
    }
} 

void printVowelCols(int colVowelCount[], int col) {
    for (int i = 0; i < col; i++) {
        if (colVowelCount[i] > 0) {
            cout << "Col " << i << " contains at least one vowel." << endl;
        }
    }
}