#include <iostream>
using namespace std;

int main() {
    int count = 0, year;

    cout << "Enter a year: ";
    cin >> year;

    while (year > 0) {
        year = year / 10;
        count++;
    }

    if (count == 4 && (year % 4 == 0 || year % 400 == 0)) {
        cout << "Leap year! 111\n";
    }
    else if (year % 100 == 0 && year % 400 != 0) {
        cout << "Not a leap year! \n";
    }
}
