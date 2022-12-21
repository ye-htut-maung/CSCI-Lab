#include <iostream>
using namespace std;

int main () {
	
	int num, counter = 1;
	cout << "Enter a number and I will print first 20 multiple: ";
	cin >> num;

	while (counter <= 20) {
		cout << num * counter << " ";
		++counter;
	}
	return 0;
}
 