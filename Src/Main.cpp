
#include "Includes.h"
#include "Flow.h"

int main() {
	while (true) {
		Flow::displayMenu();
		int choice;
		cin >> choice;
		cin.ignore(); // to ignore the newline character after integer input
		Flow::handleUserChoice(choice);
		cout << endl;
		cout << "If you want to exit, press 5. Otherwise, Press 1." << endl;
		cin >> choice;
		cin.ignore(); // to ignore the newline character after integer input
		if (choice == 5) {
			Flow::handleUserChoice(choice);
		}
		else {
			continue;
		}
	}
		
		
	return 0;
}