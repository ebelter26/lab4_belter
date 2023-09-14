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
//evalutes factorial equation based on user input
void factorial() {
	int x, factorial = 1, number;
	cout << "Enter a number: ";
	cin >> number;
	if (number < 1)
		cout << "Nice try, please enter a positive number" << endl;
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
//evalutated arthimetic equation based on user input
void arithmetic() {
	int start;
	int add;
	int x;
	int startPlus;
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> start;
	cout << "Enter a number to add each time: ";
	cin >> add;
	cout << "Enter the number of elements in the series: ";
	cin >> x;
	if (x < 1) {
		cout << "Nice try, please enter a positive number" << endl;
	}
	cout << start << " + ";
	int solution = start;
	//loop to find sum of starting value plus starting value plus variable add
	for (int i = 0; i <= x-2; i++) {
		startPlus = start + add;
		start = startPlus;
		solution = solution + startPlus;
		cout << startPlus << " ";
		if (i < x - 2)
			cout << "+ ";
		else {
			cout << " = " << solution << endl;
		}
	}
}
//evaluted geometric equation based on user input
void geometric() {
	int x; //starting value
	int a; //number to multiply by each time
	int s; //numner of elements in the series
	int n = 1;
	int xPlus;
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> x;
	int solution = x;
	cout << "Enter a number to multiply by each time: ";
	cin >> a;
	cout << "Enter the number of elements in the series: ";
	cin >> s;
	if (s < 1) {
		cout << "Nice try, please enter a positive number" << endl;
	}
	cout << x << " + ";
	//loop to add each element to solution
	for (int i = 1; i <= s-1;i++) {
		xPlus = x * pow(a, i);
		cout << xPlus;
		solution = solution + xPlus;
		if (i != s - 1) {
			cout << " + ";
		}
		else {
			cout << " = "<< solution <<endl;
		}
	}
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