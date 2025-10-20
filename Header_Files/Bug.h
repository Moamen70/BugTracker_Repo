#pragma once
#include <string>
#include <iostream>

using namespace std;

class Bug
{
public:
	Bug();
	Bug(const string& title, const string& description, const string& severity,
		const string& status, const string& assignedTo, const string& createdAt);
	~Bug();

	void displayBugDetails() const;
	// Getters and Setters
	int getId() const;
	
	string getTitle() const;
	void setTitle(const string& title);
	string getDescription() const;
	void setDescription(const string& description);
	string getSeverity() const;
	void setSeverity(const string& severity);
	string getStatus() const;
	void setStatus(const string& status);
	string getAssignedTo() const;
	void setAssignedTo(const string& assignedTo);
	string getCreatedAt() const;
	void setCreatedAt(const string& createdAt);

	void updateStatus(const string& newStatus);


private:
	static int id;
	string title;
	string description;
	string severity;
	string status;
	string assignedTo;
	string createdAt;
};

