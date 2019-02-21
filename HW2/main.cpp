#include <iostream>
#include "Item.h"
#include "Store.h"
#include "TextUI.h"

int main (int argc, char* argv[]) {

	Store s(argv[1]);
	TextUI ui;

	std::string choice = "";

	while(choice != "Leave"){
		choice = ui.MainMenu();
		ui.RouteChoice(s, choice);
	}

	return 0; 
}