#include <iostream>
#include <string>
#include <ctime>
using namespace std;
typedef struct tm Time;
class HealthProfile {
private:
	string firstName;
	string lastName;
	string gender;
	int monthOfBirth;
	int dayOfBirth;
	int yearOfBirth;
	int height;
	int weight;
public:
	HealthProfile(string f, string l, string g, int m, int d, int y, int h, int w) : firstName(f), lastName(l), gender(g),
		monthOfBirth(m), dayOfBirth(d), yearOfBirth(y), height(h), weight(w) {}
	void setFirstName(string f) {
		firstName = f;
	}
	void setLastName(string l) {
		lastName = l;
	}
	void setGender(string g) {
		gender = g;
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
	void setHeight(int h) {
		height = h;
	}
	void setWeight(int w) {
		weight = w;
	}
	string getFirstName() {
		return firstName;
	}
	string getLastName() {
		return lastName;
	}
	string getGender() {
		return gender;
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
	int getHeight() {
		return height;
	}
	int getWeight() {
		return weight;
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
	double getBMI() {
		return (weight * 703) / static_cast<double>(height * height);
	}
	void showInfo() {
		pair<double, double> heartRate = getTargetHeartRate();
		cout << "First name : " << firstName << endl
			<< "Last name : " << lastName << endl
			<< "Gender : " << gender << endl
			<< "Birth date : " << monthOfBirth << "/" << dayOfBirth << "/" << yearOfBirth << endl
			<< "Age : " << getAge() << endl
			<< "Maximum heart rate : " << getMaxHeartRate() << endl
			<< "Target heart rate : " << heartRate.first << " ~ " << heartRate.second << endl
			<< "BMI : " << getBMI() << endl;
	}
};

int main() {
	HealthProfile helath("JunYong", "Park", "Male", 11, 28, 2002, 1213, 2021);
	helath.showInfo();
}