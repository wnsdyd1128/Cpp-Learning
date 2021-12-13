#include <iostream>
#include <string>
using namespace std;
class Invoice {
private:
	string partNumber;
	string partDescription;
	int salesVolume;
	int price;
	double vat = 0.2;
	double discountRate = 0;
public:
	Invoice(string number, string description, int quantity, int _price) {
		partNumber = number;
		partDescription = description;
		salesVolume = quantity;
		price = _price;
	}
	void setPartNumber(string number) {
		partNumber = number;
	}
	void setPartDescription(string description) {
		partDescription = description;
	}
	void setSalesVolume(int q) {
		if (q >= 0)
			salesVolume = q;
	}
	void setPrice(int p) {
		if (p >= 0)
			price = p;
	}
	void setVat(double v) {
		if (v >= 0)
			vat = v;
	}
	void setDiscountRate(double r) {
		if (r >= 0)
			discountRate = r;
	}
	string getPartNumber() {
		return partNumber;
	}
	string getPartDescription() {
		return partDescription;
	}
	int getSalesVolume() {
		return salesVolume;
	}
	int getPrice() {
		return price;
	}
	double getVat() {
		return vat;
	}
	double getDiscountRate() {
		return discountRate;
	}
	double getInvoiceAmount() {
		double sum = static_cast<double>(price) * salesVolume;
		sum += vat;
		sum *= (1.0 - discountRate);
		return sum;
	}
};