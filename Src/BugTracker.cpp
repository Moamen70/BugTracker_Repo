

#include "BugTracker.h"


void BugTracker::addBug(const Bug& bug)
{
	bugs.push_back(bug);
}

void BugTracker::removeBug(int bugId)
{
	if (bugs.empty()) {
		cout << "No bugs to remove." << endl;
		return;
	}
	for (auto it = bugs.begin(); it != bugs.end(); ++it) {
		if (it->getId() == bugId) {
			bugs.erase(it);
			cout << "Bug with ID " << bugId << " removed successfully." << endl;
			return;
		}
		else {
			cout << "Bug with ID " << bugId << " not found." << endl;
		}
	}
}
Bug* BugTracker::getBug(int bugId)
{
	for (auto& bug : bugs) {
		if (bug.getId() == bugId) {
			return &bug;
		}
	}
	return nullptr;
}

void BugTracker::updateBugStatus(const int& id, const string& newStatus)
{
	Bug* bug = getBug(id);
	if (bug) {
		bug->setStatus(newStatus);
		cout << "Bug status updated successfully!" << endl;
	}
	else {
		cout << "Bug with ID " << id << " not found." << endl;
	}
}

void BugTracker::displayAllBugs() const
{
	if (bugs.empty()) {
		cout << "No bugs to display." << endl;
		return;
	}
	for (const auto& bug : bugs) {
		bug.displayBugDetails();
		cout << "------------------------" << endl;
	}
}

