#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

char randomChar() {
    int lowercase_a = (int) 'a';
    int lowercase_z = (int) 'z';
    char ranChar  = (char) (rand() % (lowercase_a - lowercase_z +1) + lowercase_a);
    return ranChar;
}

void fillCharArray(char arr[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = randomChar();
        }
    }
}

void printArray(char arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int countVowels(char arr[][3], int row, int col) {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int vowelsCounter = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < 5; k++) {
                if (arr[i][j] == vowels[k]){
                    vowelsCounter++;
                }
            }
        }
    }
    return vowelsCounter;
}

int main() {

    srand(time(0));
    char arr[3][3];
    fillCharArray(arr, 3, 3);
    printArray(arr, 3, 3);
    int vowelCount = countVowels(arr, 3, 3);
    cout << "The count of vowels in the array is " << vowelCount << endl;
    return 0;
}