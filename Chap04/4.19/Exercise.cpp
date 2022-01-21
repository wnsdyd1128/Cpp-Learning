#include <iostream>
using namespace std;
int main() {
	int counter = 10;
	int first = INT32_MIN;
	int second = INT32_MIN;
	while (counter--) {
		int num;
		cout << "Enter number: ";
		cin >> num;
		if (num > first) {
			second = first;
			first = num;
		}
		else if (num > second) {
			second = num;
		}
	}
	cout << "First largest number: " << first << endl
		<< "Second largest number: " << second << endl;
}