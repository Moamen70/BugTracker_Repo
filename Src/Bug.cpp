#include "Bug.h"

int Bug::id = 0;
Bug::Bug()
{
	// Constructor implementation
	id++;
	title = "";
	description = "";
	severity = "";
	status = "Open";
	assignedTo = "";
	createdAt = "";

}

Bug::Bug(const string& title, const string& description, const string& severity, const string& status, const string& assignedTo, const string& createdAt)
{
	id++;
	this->title = title;
	this->description = description;
	this->severity = severity;
	this->status = status;
	this->assignedTo = assignedTo;
	this->createdAt = createdAt;
}

void Bug::displayBugDetails() const
{
	cout << "Bug ID: " << id << endl;
	cout << "Title: " << title << endl;
	cout << "Description: " << description << endl;
	cout << "Severity: " << severity << endl;
	cout << "Status: " << status << endl;
	cout << "Assigned To: " << assignedTo << endl;
	cout << "Created At: " << createdAt << endl;
}

int Bug::getId() const{
	return this->id;
}

string Bug::getTitle() const {
	return this->title;
}
void Bug::setTitle(const string& title) {
	this->title = title;
}
string Bug::getDescription() const {
	return this->description;
}
void Bug::setDescription(const string& description) {
	this->description = description;
}
string Bug::getSeverity() const {
	return this->severity;
}
void Bug::setSeverity(const string& severity) {
	this->severity = severity;
}
string Bug::getStatus() const {
	return this->status;
}
void Bug::setStatus(const string& status) {
	this->status = status;
}
string Bug::getAssignedTo() const {
	return this->assignedTo;
}
void Bug::setAssignedTo(const string& assignedTo) {
	this->assignedTo = assignedTo;
}
string Bug::getCreatedAt() const {
	return this->createdAt;
}
void Bug::setCreatedAt(const string& createdAt) {
	this->createdAt = createdAt;
}

void Bug::updateStatus(const string& newStatus)
{
	this->status = newStatus;
}

