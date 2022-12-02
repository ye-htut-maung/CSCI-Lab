#include <iostream>
using namespace std;

void fillSingleDigits(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        nums[i] = rand() % (9 - 0 + 1) + 0;
    }
}

void countSingleDigits(int nums[], int digits[], int n) {
    for (int i = 0; i < n; i++) {
        digits[nums[i]]++;
    }
}

void printArray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
   int n;
   cout << "Enter a positive number between 1 and 100: ";
   cin >> n;
   int nums[n];
   int digits[10] = {0}; // {0} initializes all elements of the array to 0
   fillSingleDigits(nums, n);
   countSingleDigits(nums, digits, n);
   printArray(nums, n); // prints elements of 1D array separated by spaces
   cout << "Count of each digit in nums:\n";
   for(int i = 0; i < 10; i++){
      cout << i << ": " << digits[i] << endl;
   }
   return 0;
 }