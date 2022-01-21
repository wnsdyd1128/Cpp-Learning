#include <iostream>
using namespace std;
int main() {
	cout << "N\t\t5*N\t\t10*N\t\t15*N" << endl;
	int n = 1;
	while (n <= 12) {
		cout << n << "\t\t" << 5 * n << "\t\t" << 10 * n << "\t\t" << 15 * n << endl;
		n++;
	}
}