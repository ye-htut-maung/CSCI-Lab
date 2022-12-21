#include <iostream>
using namespace std;

int getFirstThreeSum(int num);
int getFirstThree(int num);
void printRange(int sum);

int main() {

    int num;  
    int sumFirstThree;

    cout << "Enter a number greater than or equal to 100: ";
    cin >> num;

    while (num < 100) {
        cout << "Invalid Input. Enter a number greater than or equal to 100: ";
        cin >> num;
    }

    sumFirstThree = getFirstThreeSum(getFirstThree(num));
    cout << "the sum of the first three digits is " << sumFirstThree << endl;

    printRange(sumFirstThree);
    return 0;
}


int getFirstThreeSum(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + (getFirstThreeSum(num/10));
    }
}

int getFirstThree(int num) {
    if(num < 1000) {
        return num;
    } else {
        return getFirstThree(num/10);
    }
}

void printRange(int sum) {
    if (sum % 2 == 0) {
        for (int i = 0; i <= sum; i++) {
            cout << i << " ";
        }
    } else {
        for (int i = 1; i <= sum; i++) {
            cout << i << " ";
        }
    }
}


// int getFirstThreeSum(int num) {

//     int sum = 0;

//     while (num >= 1000) {
//         num /= 10;
//     }

//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }

//     return sum;
// }


