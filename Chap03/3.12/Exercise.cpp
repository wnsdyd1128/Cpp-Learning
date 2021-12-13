#include <iostream>
#include <string>
using namespace std;
class Date {
private:
	int month;
	int day;
	int year;
public:
	Date(int m, int d, int y) : day(d), year(y) {
		if (1 <= m && m <= 12)
			month = m;
		else
			month = 1;
	}
	void setMonth(int m) {
		month = m;
	}
	void setDay(int d) {
		day = d;
	}
	void setYear(int y) {
		year = y;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	int getYear() {
		return year;
	}
	void displayDate() {
		cout << month << "/" << day << "/" << year << endl;
	}
};

int main() {
	Date today(12, 13, 2021);
	today.displayDate();
}