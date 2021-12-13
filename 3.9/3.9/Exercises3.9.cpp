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