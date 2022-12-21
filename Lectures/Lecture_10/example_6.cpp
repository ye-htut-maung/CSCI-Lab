#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int rand_num = (rand() % 100) + 1;

    int user_num;
    int guess_counter = 1;

    cout << "Enter a guess number between 1 and 100: ";
    cin >> user_num;

    while (user_num != rand_num) {
        if (user_num < rand_num) {
            cout << "Too low" << endl;
        } else {
            cout << "Too high" << endl;
        }
    cout << "Enter a guess number between 1 and 100: ";
    cin >> user_num;
    guess_counter++;
    }

    cout << "You guessed the number!";
    cout << "You tried " << guess_counter << " times.";


    return 0;
}