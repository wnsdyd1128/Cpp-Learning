#include <iostream>
using namespace std;

class ElectricBill {
private:
	double amountPaid;
public:
	ElectricBill(double a) {
		if (a < 0)
			amountPaid = 0;
		else
			amountPaid = a;
	}
	void setAmountPaid(double a) {
		amountPaid = a;
	}
	double getAmountPaid() {
		return amountPaid;
	}
	double getVAT() {
		return amountPaid * 0.18;
	}
	double getREA() {
		return amountPaid * 0.03;
	}
	double getEWURA() {
		return amountPaid * 0.01;
	}
	double getUnits() {
		double totalDeduction = getVAT() + getREA() + getEWURA();
		double remainingAmount = amountPaid - (totalDeduction + 5000);
		return remainingAmount / 295.0;
	}
	void showInfo() {
		cout << "Amount paid : " << getAmountPaid() << endl
			<< "The number of kilowatt hours you get : " << getUnits() << endl;
	}
};

int main() {
	ElectricBill(10000).showInfo();
}