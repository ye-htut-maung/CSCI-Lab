#include <iostream>
using namespace std;

string firstDigit(int num);
int undouble(int num);
string halfString(string name);
void sort(string name1, string name2, string name3, string name4);
string randomWord();

int main() {
   cout << firstDigit(65536) << endl; // prints: Six
   cout << undouble(11223344); // prints: 1234
   cout << halfString("Freddy") << endl; // prints: Fre
   sort("Kelly", "Max", "Freddy", "Jack"); // prints: Freddy Jack Kelly Max
   string a = randomWord(); // assigns a random value
   return 0;
}