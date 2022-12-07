#include <iostream> 
#include <map>
#include <string>
#include "Map.h"
using namespace std;

//Display method to display the map
void Map::display(map< string, string > stateDataMap) { 
	map<string, string>::iterator itr;
	cout << "\n" << "Displaying whats in the map stateDataMap: " << "\n";
	for (itr = stateDataMap.begin(); itr != stateDataMap.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

}
//Method where user can input the state name and its capitol will be displayed
void Map::displayCapital(map< string, string > stateDataMap) { 
	cout << "Enter the name of state: ";
	string state;
	cin >> state;
	int checker = 0;
	map<string, string>::iterator itr;
	cout << "The capital of that state is: ";
	for (itr = stateDataMap.begin(); itr != stateDataMap.end(); ++itr) {
		if (itr->first == state) {
			cout << itr->second;
			checker = 1;
		}
	}
	if (checker == 0)
		cout << "That state is not in stateDataMap!! " << endl;

}

int main()
{
	// Creating a map called stateDataMap and populating it with states and their corresponding capitals
	Map m;
	map < string, string > stateDataMap;
	stateDataMap.insert(make_pair("Nebraska", "Lincoln"));
	stateDataMap.insert(make_pair("New_York", "Albany"));
	stateDataMap.insert(make_pair("Ohio", "Columbus"));
	stateDataMap.insert(make_pair("California", "Sacramento"));
	stateDataMap.insert(make_pair("Massachusetts", "Boston"));
	stateDataMap.insert(make_pair("Texas", "Austin"));

	// Calling display method to display the map before the modification
	m.display(stateDataMap);

	// Modifying the the map
	stateDataMap["California"] = "Los Angeles";

	// Calling display method to display the map after the modification
	m.display(stateDataMap);
	
	// Calling method where user can input the state name and its capitol will be displayed
	m.displayCapital(stateDataMap); 

	return 0;
}
