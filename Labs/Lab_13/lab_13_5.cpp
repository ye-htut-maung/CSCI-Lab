#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    int num1, num2;
    int user_ans;
    int sum;
    int correct_counter = 0, wrong_counter = 0;
    srand(time(0));

    for (int i = 1; i <= 5; i++) {
        num1 = 1 + (rand() % (100-1) + 1);
        num2 = 1 + (rand() % (100-1) + 1);
        sum = num1 + num2;

        cout << num1 << " + " << num2 << " = ";
        cin >> user_ans;

        if (user_ans != sum) {
            cout << "Wrong! The answer was " << sum << endl;
            wrong_counter++;
        } else {
            correct_counter++;
        }
    }

    cout << "You got " << correct_counter << " correct, " << wrong_counter << " worng.";

    return 0; 
}