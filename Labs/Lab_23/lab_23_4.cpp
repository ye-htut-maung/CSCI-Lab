#include <iostream>
using namespace std;

void readInput(int queenRows[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> queenRows[i];
    }
}

void printBoard(int queenRows[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (queenRows[j] == i) {
                cout << "Q";
            } else {
                cout << ".";
            }

        }
        cout << endl;
    }
}

int main() {
   int queenRows[8];
   cout << "Enter rows for queens:\n";
   readInput(queenRows, 8);
   printBoard(queenRows, 8);
   return 0;
}