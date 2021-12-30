#include <iostream> 
#include <cstdlib> 
using namespace std;

int main() {


	cout << "MAGIC 8-BALL:\n\n";
	srand(time(NULL));
	int answer = rand() % 10;

	if (answer == 0) {
		cout << "It is certain.";
	}
	else if (answer == 1) {
		cout << "Most likely.";
	}
	else if (answer == 2) {
		cout << "Signs point to yes.";
	}
	else if (answer == 3) {
		cout << "Reply hazy, try again.";
	}
	else if (answer == 4) {
		cout << "Ask again later.";
	}
	else if (answer == 5) {
		cout << "Better not tell you now.";
	}
	else if (answer == 6) {
		cout << "Cannot predict now.";
	}
	else if (answer == 7) {
		cout << "My reply is no.";
	}
	else if (answer == 8) {
		cout << "Outlook not so good.";
	}
	else {
		cout << "Very doubtful";
	}


}