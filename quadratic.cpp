#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c, root1, root2;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	cout << "Root 1 is: " << root1 << endl;
	cout << "Root 2 is " << root2;

}