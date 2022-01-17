#include <iostream> 
using namespace std;
int main() {
	int lapsCompleted;
	double totalFunds = 0.0;
	cout << "Enter laps completed: ";
	while (cin >> lapsCompleted, lapsCompleted != -1) {
		double sponsership, contribution;
		cout << "Enter sponsership rate: ";
		cin >> sponsership;
		contribution = sponsership * lapsCompleted;
		if (lapsCompleted > 40)
			contribution += (lapsCompleted % 40) * (sponsership * 0.5);
		cout << "Student conribution is: " << contribution << endl << endl;
		cout << "Enter laps completed: ";
		totalFunds += contribution;
	}
	cout << "Total funds raised: " << totalFunds << endl;
}