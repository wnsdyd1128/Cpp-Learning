#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int accountNumber;
	cout << "Enter account number (or -1 to quit): ";
	while (cin >> accountNumber, accountNumber != -1) {
		double balance, charge, credit, limit, newBalance;
		cout << "Enter beginning balance: ";
		cin >> balance;
		cout << "Enter total charges: ";
		cin >> charge;
		cout << "Enter total credits: ";
		cin >> credit;
		cout << "Enter credit limit: ";
		cin >> limit;
		newBalance = balance + charge - credit;
		balance = newBalance;
		cout << "New balance is " << newBalance << endl
			<< "Account: " << accountNumber << endl
			<< "Credit limit: " << limit << endl
			<< "Balance: " << balance << endl;
		if (balance > limit)
			cout << "Credit Limit Exceeded" << endl;
		cout << "Enter account number (or -1 to quit): ";
	}
}