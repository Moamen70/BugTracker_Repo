Goal:

A console-based C++ application to record, manage, and track software bugs efficiently.

Users:

Testers – add and view bugs
Developers – update bug status
Admin (optional, later) – view all and manage users

Main Features:

Add new bug reports (with title, description, severity, assignedTo)
List all bugs
Update bug status (Open, In Progress, Fixed, Closed)
Search bugs by keyword
Save & load data from file (persistence)

Data to store for each bug:

Field			Type				Description
ID				Integer				Unique ID for each bug
Title			String				Short title of bug
Description		String				Detailed explanation
Severity		Enum/String			Low / Medium / High / Critical
Status			Enum/String			Open / InProgress / Fixed / Closed
AssignedTo		String				Developer responsible
CreatedAt		String				Timestamp

Technologies:

C++17
STL containers (vector, map)
File I/O (CSV file)

Output Example (Console):
==== Bug Tracker ====
1. Add Bug
2. List Bugs
3. Update Bug Status
4. Search Bugs
5. Exit

Future Enhancements:

Authentication system
Reports and summaries
Export to Excel / JSON