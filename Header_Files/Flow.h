#pragma once
#include "Includes.h"
#include "BugTracker.h"


class Flow {
public:
	static void displayMenu() ;
	static void handleUserChoice(int choice);
	static BugTracker tracker;
	
	static string getCurrentDate();
	
};