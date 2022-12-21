#include <iostream>
using namespace std;
int main() {
	
	int number;
	int i = 1;
	cout << "Please enter a number which is greater than 1: ";
	cin >> number;
	/*
	for(int i = number; i >= 1; i--) {
		cout << i << " ";
	}
	*/

	while (i <= number) {
		cout << number << " "; 
		number = number - 1;
	}


	return 0;

}
