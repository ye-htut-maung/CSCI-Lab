#include <iostream>
using namespace std;

void readInput(int nums[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> nums[i];
    }
} 

double arrayAverage(int nums[], int size) {
    double total = 0.0;

    for (int i = 0; i < size; i++) {
        total += nums[i];
    }

    return total / size;
}

void greaterThanAverage(int nums[], int size, double average){
    for (int i = 0; i < size; i++) {
        if (nums[i] > average) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}


int main() {

    int nums[10];
    double average;
    cout << "Enter ten numbers:\n";
    // read in numbers from user
    readInput(nums, 10);
    // compute average of elements in array
    average = arrayAverage(nums, 10);
    // print average value to monitor
    cout << average << endl;
    // print array elemnets that are greater than average
    greaterThanAverage(nums, 10, average);

    return 0;
}