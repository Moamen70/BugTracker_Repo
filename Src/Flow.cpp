#include "Flow.h"

BugTracker Flow::tracker;
void Flow::displayMenu() {
	cout << "Bug Tracker Menu:" << endl;
	cout << "1. Add Bug" << endl;
	cout << "2. Remove Bug" << endl;
	cout << "3. Update Bug Status" << endl;
	cout << "4. Display All Bugs" << endl;
	cout << "5. Exit" << endl;
	cout << "Enter your choice: ";
}

void Flow::handleUserChoice(int choice)
{
	if (choice == 1) {
		// Code to add a bug
		cout << "Adding a new bug..." << endl;
		cout << "Enter bug title: ";
		string title;
		getline(cin, title);
		cout << "Enter bug description: ";
		string description;
		getline(cin, description);
		cout << "Enter bug severity (Low, Medium, High): ";
		string severity;
		getline(cin, severity);
		string date = Flow::getCurrentDate();
		cout << "Enter assigned to: ";
		string assignedTo;
		getline(cin, assignedTo);
		tracker.addBug(Bug(title, description, severity, assignedTo, date));
		cout << "Bug added successfully!" << endl;
	}
	else if (choice == 2) {
		// Code to remove a bug
		cout << "Removing a bug..." << endl;
		cout << "Enter bug ID to remove: ";
		int bugId;
		cin >> bugId;
		cin.ignore(); // to ignore the newline character after integer input
		tracker.removeBug(bugId);
	}
	else if (choice == 3) {
		// Code to update bug status
		cout << "Updating bug status..." << endl;
		cout << "Enter bug ID to update: ";
		int bugId;
		cin >> bugId;
		cin.ignore(); // to ignore the newline character after integer input
		cout << "Enter new status (Open, In Progress, Closed): ";
		string newStatus;
		getline(cin, newStatus);
		tracker.updateBugStatus(bugId, newStatus);
	}
	else if (choice == 4) {
		// Code to display all bugs
		cout << "Displaying all bugs..." << endl;
		tracker.displayAllBugs();
	}
	else if (choice == 5) {
		// Code to exit
		cout << "Exiting Bug Tracker. Goodbye!" << endl;
		exit(0);
	}
	else {
		cout << "Invalid choice. Please try again." << endl;
	}
}

string Flow::getCurrentDate()
{
	std::time_t t = std::time(nullptr);
	std::tm now;

	// Use the safer version
	localtime_s(&now, &t);

	std::ostringstream oss;
	oss << std::put_time(&now, "%Y-%m-%d");  // format: YYYY-MM-DD
	std::string date = oss.str();
	return date;
}


