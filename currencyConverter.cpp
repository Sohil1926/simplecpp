#include <iostream>
using namespace std;

int main() {

	float pesos, reais, soles, dollars;
	cout << "Enter number of Colombian Pesos: ";
	cin >> pesos;

	cout << "Enter number of Brazilian Reais: ";
	cin >> reais;

	cout << "Enter number of Peruvian Soles: ";
	cin >> soles;

	dollars = (0.049 * pesos) + (0.18 * reais) + (0.25 * soles);
	cout << "US Dollars = $" << dollars << endl;

}