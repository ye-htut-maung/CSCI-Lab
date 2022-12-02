#include <iostream>
using namespace std;

void reverseCopy(int nums[], int copyNums[], int size);
void printArray(int nums[], int size);

int main() {
   int nums[10], copyNums[10];
   cout << "Enter numbers: ";
   for(int i = 0; i < 10; i++){
      cin >> nums[i];
   }
   reverseCopy(nums, copyNums, 10);
   printArray(nums, 10); // prints elements of array separated by spaces
   printArray(copyNums, 10);
   return 0;
 }

 void reverseCopy(int nums[], int copyNums[], int size) {
    int j = 0;
    for (int i = size - 1; i >= 0; i--) {
        copyNums[j++] = nums[i];
    }
 }

 void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
 }