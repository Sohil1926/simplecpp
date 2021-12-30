#include <iostream>
using namespace std;

int main() {
	float earth_weight;
	int planet;

	cout << "Enter your weight on Earth: ";
	cin >> earth_weight;

	cout << "What planet do you want to go to? Enter a number from 1-7: ";
	cin >> planet;

	switch (planet) {
	case 1:
		cout << "Your weight on Mercury is: " << earth_weight * 0.38 << " pounds";
		break;
	case 2:
		cout << "Your weight on Venus is: " << earth_weight * 0.91 << " pounds";
		break;
	case 3:
		cout << "Your weight on Mars is " << earth_weight * 0.38 << " pounds";
		break;
	case 4:
		cout << "Your weight on Jupiter is " << earth_weight * 2.34 << " pounds";
		break;
	case 5:
		cout << "Your weight on Saturn is " << earth_weight * 1.06 << " pounds";
		break;
	case 6:
		cout << "Your weight on Uranus is " << earth_weight * 0.92 << " pounds";
		break;
	case 7:
		cout << "Your weight on Neptune is " << earth_weight * 1.19 << " pounds";
		break;
	}

}