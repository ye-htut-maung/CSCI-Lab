#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    int coin;
    int head_counter;
    int tail_counter;
    double head_average;
    double tail_average;

    head_counter = 0;
    tail_counter = 0;
    head_average = 0;
    tail_average = 0;

    for (int i = 1; i <= 10; i++) {
        coin = rand() % 2;
        if (coin == 0) {
            tail_counter++;
        } else {
            head_counter++;
        }
    }

    head_average = (double)head_counter / 10;
    tail_average = (double)tail_counter / 10;

    cout << "Probability of heads given 10 tosses = " << head_average << endl;
    cout << "Probability of tails given 10 tosses = " << tail_average << endl;

    head_counter = 0;
    tail_counter = 0;
    head_average = 0;
    tail_average = 0;

    for (int i = 1; i <= 100; i++) {
        coin = rand() % 2;
        if (coin == 0) {
            tail_counter++;
        } else {
            head_counter++;
        }
    }

    head_average = (double)head_counter / 100;
    tail_average = (double)tail_counter / 100;

    cout << "Probability of heads given 100 tosses = " << head_average << endl;
    cout << "Probability of tails given 100 tosses = " << tail_average << endl;

    head_counter = 0;
    tail_counter = 0;
    head_average = 0;
    tail_average = 0;

    for (int i = 1; i <= 1000; i++) {
        coin = rand() % 2;
        if (coin == 0) {
            tail_counter++;
        } else {
            head_counter++;
        }
    }

    head_average = (double)head_counter / 1000;
    tail_average = (double)tail_counter / 1000;

    cout << "Probability of heads given 1000 tosses = " << head_average << endl;
    cout << "Probability of tails given 1000 tosses = " << tail_average << endl;

    head_counter = 0;
    tail_counter = 0;
    head_average = 0;
    tail_average = 0;

    for (int i = 1; i <= 5000; i++) {
        coin = rand() % 2;
        if (coin == 0) {
            tail_counter++;
        } else {
            head_counter++;
        }
    }

    head_average = (double)head_counter / 5000;
    tail_average = (double)tail_counter / 5000;

    cout << "Probability of heads given 5000 tosses = " << head_average << endl;
    cout << "Probability of tails given 5000 tosses = " << tail_average << endl;

    return 0;
}