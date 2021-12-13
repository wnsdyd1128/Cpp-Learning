#include <string>
#include <iostream>
using namespace std;
class Account {
private:
	string name; // account name data member
	int balance = 0; // data member with default initial value
public:
	// Account constructor with two param
	Account(string accountName, int init) : name(accountName), balance(init) {
		if (init > 0)
			balance = init;
	}
	void deposit(int depositAmount) {
		if (depositAmount > 0)
			balance += depositAmount;
	}
	void withdraw(int withdrawAmount) {
		if (withdrawAmount > balance) {
			cout << "Withdrawal amount exceeded account balance." << endl;
			return;
		}
		balance -= withdrawAmount;
	}
	int getBalance() const {
		return balance;
	}
	void setName(string accountName) {
		name = accountName;
	}
	string getName() const {
		return name;
	}
};

void displayAccount(Account accountToDisplay) {
	cout << accountToDisplay.getName() << "balance is $" << accountToDisplay.getBalance() << endl;
}
int main() {
	Account account1{ "Jane Green", 50 };
	Account account2{ "John Blue", -7 };
	
	//display initial balance of each object
	cout << "account1: ";
	displayAccount(account1);
	cout << "account2: ";
	displayAccount(account2);

	cout << endl << endl << "Enter deposit amount for account1: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount);

	// display balances
	cout << endl << endl << "account1: ";
	displayAccount(account1);
	cout << "account2: ";
	displayAccount(account2);

	cout << endl << endl << "Enter deposit amount for account2: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "adding " << depositAmount << " to account2 balance";
	account2.deposit(depositAmount);

	// display balances
	cout << endl << endl << "account1: ";
	displayAccount(account1);
	cout << "account2: ";
	displayAccount(account2);
}