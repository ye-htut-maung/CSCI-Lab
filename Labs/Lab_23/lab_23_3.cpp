#include <iostream>
using namespace std;

void readInput(int queenCol[], int size){
    for (int i = 0; i < size; i++) {
        cin >> queenCol[i];
    }
}


void printBoard(int queenCol[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (queenCol[i] == j) {
                cout << "Q";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

int main() {
    int queenColumns[8];
    cout << "Enter columns for queens:\n";
    readInput(queenColumns, 8);
    printBoard(queenColumns, 8);
    return 0;
}