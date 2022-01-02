#include <iostream>
#include <string>
#include <ctime>
using namespace std;
typedef struct tm Time;
class HeartRates {
private:
	string firstName;
	string lastName;
	int monthOfBirth;
	int dayOfBirth;
	int yearOfBirth;
public:
	HeartRates(string f, string l, int m, int d, int y) : firstName(f), lastName(l), monthOfBirth(m), dayOfBirth(d), yearOfBirth(y) {}
	void setFirstName(string f) {
		firstName = f;
	}
	void setLastName(string l) {
		lastName = l;
	}
	void setMonth(int m) {
		monthOfBirth = m;
	}
	void setDay(int d) {
		dayOfBirth = d;
	}
	void setYear(int y) {
		yearOfBirth = y;
	}
	string getFirstName() {
		return firstName;
	}
	string getLastName() {
		return lastName;
	}
	int getMonth() {
		return monthOfBirth;
	}
	int getDay() {
		return dayOfBirth;
	}
	int getYear() {
		return yearOfBirth;
	}
	int getAge() {
		time_t timer = time(NULL);
		Time t;
		localtime_s(&t, &timer);
		int currentYear = t.tm_year + 1900;
		return currentYear - yearOfBirth;
	}
	int getMaxHeartRate() {
		int age = getAge();
		return 220 - age;
	}
	pair<double, double> getTargetHeartRate() {
		pair<double, double> ret;
		int heartRate = getMaxHeartRate();
		ret.first = heartRate * 0.5;
		ret.second = heartRate * 0.85;
		return ret;
	}
	void showInfo() {
		pair<double, double> heartRate = getTargetHeartRate();
		cout << "First name : " << firstName << endl
			<< "Last name : " << lastName << endl
			<< "Birth date : " << monthOfBirth << "-" << dayOfBirth << "-" << yearOfBirth << endl
			<< "Age : " << getAge() << endl
			<< "Maximum heart rate : " << getMaxHeartRate() << endl
			<< "Target heart rate : " << heartRate.first << " ~ " << heartRate.second << endl;
	}
};

int main() {
	HeartRates heartRate("JunYong", "Park", 11, 28, 2002);
	heartRate.showInfo();
}