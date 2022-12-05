#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (100 - 1 + 1) + 1;
    }
}

void printArray(int x[], int cap){
  for(int i = 0; i < cap; i++){
     cout << x[i] << " ";
  }
}

void insertionSort(int nums[], int cap) {
    for (int i = 0; i < cap; i++) {
        int index = i;
        int data = nums[index];

        while ((index-1) >= 0 && data < nums[index-1]) {
            swap(nums[index], nums[index - 1]);
            index--;
        }
    }

}

int main() {

    int cap = 10;
    int nums[cap];
    fillArray(nums, cap); // fill array with random numbers
    printArray(nums, cap); // print array
    cout << endl;
    insertionSort(nums, cap); // sort elements in array
    cout << endl;
    printArray(nums, cap); // print sorted array
    cout << endl;


    return 0;
}