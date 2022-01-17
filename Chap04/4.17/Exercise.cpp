#include <iostream>
using namespace std;
int main() {
	int counter = 1;
	int largest = INT32_MIN;
	while (counter <= 10) {
		int number;
		cout << "Enter number: ";
		cin >> number;
		if (number > largest)
			largest = number;
		counter++;
	}
	cout << "Largest number is " << largest << endl;
}