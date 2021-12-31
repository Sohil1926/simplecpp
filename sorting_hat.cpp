#include <iostream>
using namespace std;

int main() {

	int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0, max = 0;
	int answer1, answer2, answer3, answer4;
	string house;

	cout << "The Sorting Hat Quiz! \n\n";

	// question 1
	cout << "Q1) When I'm dead, I want people to remember me as: \n";
	cout << "1) The Good \n";
	cout << "2) The Great \n";
	cout << "3) The Wise \n";
	cout << "4) The Bold \n";
	cin >> answer1;

	if (answer1 == 1) {
		hufflepuff = hufflepuff + 1;
	}
	else if (answer1 == 2) {
		slytherin = slytherin + 1;
	}
	else if (answer1 == 3) {
		ravenclaw = ravenclaw + 1;
	}
	else if (answer1 == 4) {
		gryffindor = gryffindor + 1;
	}
	else {
		cout << "Invalid input";
	}

	// question 2
	cout << "Q2) Dawn or Dusk? \n";
	cout << "1) Dawn \n";
	cout << "2) Dusk \n";
	cin >> answer2;

	if (answer2 == 1) {
		gryffindor = gryffindor + 1;
		ravenclaw = ravenclaw + 1;
	}
	else if (answer2 == 2) {
		hufflepuff = hufflepuff + 1;
		slytherin = slytherin + 1;
	}
	else {
		cout << "Invalid input";
	}

	// question 3 
	cout << "Q3) Which kind of instrument most pleases your ear?";
	cout << "1) The violin \n";
	cout << "2) The trumpet \n";
	cout << "3) The piano \n";
	cout << "4) The drum \n";
	cin >> answer3;

	if (answer3 == 1) {
		slytherin = slytherin + 1;
	}
	else if (answer3 == 2) {
		hufflepuff = hufflepuff + 1;
	}
	else if (answer3 == 3) {
		ravenclaw = ravenclaw + 1;
	}
	else if (answer3 == 4) {
		gryffindor = gryffindor + 1;
	}
	else {
		cout << "Invalid input";
	}

	// question 4
	cout << "Q4) Which road tempts you most?";
	cout << "1) The wide, sunny grassy lane \n";
	cout << "2) The narrow, dark, lantern-lit alley \n";
	cout << "3) The twisting, leaf-strewn path through woods \n";
	cout << "4) The cobbled street lined (ancient buildings) \n";
	cin >> answer4;

	if (answer4 == 1) {
		hufflepuff = hufflepuff + 1;
	}
	else if (answer4 == 2) {
		slytherin = slytherin + 1;
	}
	else if (answer4 == 3) {
		gryffindor = gryffindor + 1;
	}
	else if (answer4 == 4) {
		ravenclaw = ravenclaw + 1;
	}
	else {
		cout << "Invalid input";
	}

	if (gryffindor > max) {

		max = gryffindor;
		house = "Gryffindor";

	}

	if (hufflepuff > max) {

		max = hufflepuff;
		house = "Hufflepuff";

	}

	if (ravenclaw > max) {

		max = ravenclaw;
		house = "Ravenclaw";

	}

	if (slytherin > max) {

		max = slytherin;
		house = "Slytherin";

	}

	cout << house << "!\n";



}