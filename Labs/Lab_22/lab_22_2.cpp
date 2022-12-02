#include <iostream>
using namespace std;

void arrayFun(int nums[], int size);

int main() {
   int size;
   cout << "How many numbers to enter? ";
   cin >> size;
   int nums[size];
   cout << "Enter numbers: ";
   for(int i = 0; i < size; i++){
      cin >> nums[i];
   }
   arrayFun(nums, size); // prints sum, average, largest and smallest of elements in nums
   return 0;
}

void arrayFun(int nums[], int size) {
    int sum = 0;
    double average = 0.0;
    int largest;
    int smallest;
    largest = nums[0];
    smallest = nums[0];

    for (int i = 0; i < size; i++) {
        sum += nums[i];
        if (nums[i] > largest) {
            largest = nums[i];
        }
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    average = (double)sum / size;

    cout << "The sum of all elements is " << sum << endl;
    cout << "The average of all elements is "<< average << endl;
    cout << "The largest element is " << largest << endl;
    cout << "The smallest element is " << smallest << endl;

    

}