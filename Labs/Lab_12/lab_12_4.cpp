#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int computer_rand_num = 1 + (rand() % 100);
    int user_num;
    int counter = 0;

    cout << "Guess the number I'm thinking of between 1 and 100: ";

    do {
        cin >> user_num;
        counter++;
        if (user_num > computer_rand_num) cout << "Too big" << endl;
        else if (user_num < computer_rand_num) cout << "Too small" << endl;
    } while(computer_rand_num != user_num);

    cout << "Congratulations!  You took " << counter << " guesses.";


    return 0;
}