#include<iostream>
using namespace std;

void fillRandom(int nums[], int n);
void printArray(int nums[], int n);

int main() {
    srand(time(0));
   int n;
   cout << "Enter a positive number between 1 and 100: ";
   cin >> n;
   int nums[n];
   fillRandom(nums, n);
   printArray(nums, n); // prints elements of 1D array separated by spaces
   return 0;
}

void fillRandom(int nums[], int n) {
    for(int i = 0; i < n; i++) {
        nums[i] = rand() % (100 - 1 + 1) + 1;
    }
}

void printArray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
}