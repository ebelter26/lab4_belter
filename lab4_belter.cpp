#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int x, factorial = 1, number;
	cout << "Enter a number: ";
	cin >> number;
	if (number < 1)
		cout << "Not a positive number, try again." << endl;
	else {
		cout << number << "! = ";
	}
	for (x = 1; x <= number; x++) {
		cout << x;
		factorial = factorial * x;
		if (x != number)
			cout << " * ";
		else {
			cout << " = " << factorial << endl;
		}
	}
}
void arithmetic() {
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
}
void geometric() {
	int x;
	cin >> x;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}