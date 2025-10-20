#pragma once
#include "Includes.h"
#include "Bug.h"
class BugTracker
{
public:


	void addBug(const Bug& bug);
	void removeBug(int bugId);
	Bug* getBug(int bugId);
	void updateBugStatus(const int& id, const string& newStatus);
	void displayAllBugs() const;
	

private:
	vector<Bug> bugs;
};

