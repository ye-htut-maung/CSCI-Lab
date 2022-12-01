#include <iostream>
#include <string>  // Needed for string class.
#include <cstdlib> // Needed for randomization.
#include <ctime>
using namespace std;
int deck[52];
// string deck_rank[52];
string card_names[] = {"ace", "two", "three", "four", "five", "six",
                       "seven", "eight", "nine", "ten", "Joker", "Queen", "King"};

string rank_names[] = {"clubs", "diamonds", "hearts", "spades"};
void swap_cards(int i, int j);
int rand0_to_N(int n);
int main()
{
    srand(time(0)); // Set random seed.
    // Initialize deck 0, 1, 2, 3... 51
    for (int i = 0; i < 52; ++i)
    {
        deck[i] = i;
    }
    // Shuffle deck.
    for (int i = 51; i > 0; --i)
    {
        int j = rand0_to_N(i);
        swap_cards(i, j);
    }
    // Deal 5 cards.
    for (int i = 0; i < 5; ++i)
    {
        int j = deck[i] % 13;
        int k = deck[i] % 4;
        cout << card_names[j] << " of " << rank_names[k] << endl;
    }
    cout << endl;
    return 0;
}
//
void swap_cards(int i, int j)
{
    int temp = deck[i];
    deck[i] = deck[j];
    deck[j] = temp;
}
//
int rand0_to_N(int n)
{
    return rand() % (n + 1);
}