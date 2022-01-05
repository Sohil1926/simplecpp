#include <iostream> 
#include <vector>
using namespace std;

int main() {
	// program to find the sum of even numbers and the product of odd numbers in a vector

	vector<int> vector = { 2, 4, 3, 6, 1, 9 };
	int even_total = 0, odd_product = 1;
	for (int i = 0; i < vector.size(); i++) {
		if (vector[i] % 2 == 0) {
			even_total = even_total + vector[i];
		}
		else {
			odd_product = odd_product * vector[i];
		}
	}

	cout << even_total << "\n";
	cout << odd_product << "\n";

}