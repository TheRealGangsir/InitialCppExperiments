/*
 * Mainfile.cpp
 *
 *  Created on: Apr 18, 2017
 *      Author: othscs253
 */

#include <iostream>
#include "Mainfile.h"
#include "Line.h"

int main() {
	using namespace std;
	int p1x, p2x, p2y, p1y;

	cout << "Please enter X for line 1, point 1.\n";
	cin >> p1x;
	if (!checkCin()) {
		return 0;
	}
	cout << "Please enter Y for line 1, point 1.\n";
	cin >> p1y;
	if (!checkCin()) {
		return 0;
	}
	cout << "Please enter X for line 1, point 2.\n";
	cin >> p2x;
	if (!checkCin()) {
		return 0;
	}
	cout << "Please enter Y for line 1, point 2.\n";
	cin >> p2y;
	if (!checkCin()) {
		return 0;
	}

	Line line1 { p1x, p2x, p1y, p2y };

	cout << "Please enter X for line 2, point 1.\n";
	cin >> p1x;
	if (!checkCin()) {
		return 0;
	}
	cout << "Please enter Y for line 2, point 1.\n";
	cin >> p1y;
	if (!checkCin()) {
		return 0;
	}
	cout << "Please enter X for line 2, point 2.\n";
	cin >> p2x;
	if (!checkCin()) {
		return 0;
	}
	cout << "Please enter Y for line 2, point 2.\n";
	cin >> p2y;
	if (!checkCin()) {
		return 0;
	}

	Line line2(p1x, p2x, p1y, p2y);

	while (true) {
		cout << "Choices:\n1. View line 1\n2. View line 2\n"
				<< "3. Change line 1\n4. Change line 2\n5. View intersection\n";
		int choice;
		cin >> choice;
		if (!checkCin()) {
			continue;
		}
		switch (choice) {
		case 1: {
			cout << line1.print();
		}
			break;
		case 2: {
			cout << line2.print();
		}
			break;
		case 3: {

		}
			break;
		case 4: {

		}
			break;
		case 5: {

		}
			break;
		}

	}

	return 0;
}

//checks if input was valid, and clears it out
bool checkCin() {
	using namespace std;
	if (cin.fail()) {
		cin.clear();
		cout << "Invalid input.\n";
		cin.ignore(12344557, '\n');
		return false;
	}
	cin.ignore(12344557, '\n');
	return true;
}
