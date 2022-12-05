#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void fillWithDistinctNums(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        int randNum = rand() % (20 - 1 + 1) + 1;
        while (true) {
            int temp = 0;
            for (int j = 0; j < i; j++) {
                if (nums[j] == randNum) {
                    randNum = rand() % (20) + 1;
                    temp = 1;
                }
            }
            if (temp == 0) {
                break;
            }
        }
        nums[i] = randNum;
    }
}

void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    int nums[20] = {0};
    fillWithDistinctNums(nums, 20);
    printArray(nums, 20);


    return 0;
}