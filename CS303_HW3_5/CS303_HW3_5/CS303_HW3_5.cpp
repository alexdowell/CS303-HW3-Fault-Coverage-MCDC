#include <iostream> 
#include <map>
#include <string>
#include "Map.h"
using namespace std;

void Map::display(map< string, string > stateDataMap) { // Displaying the map.
	map<string, string>::iterator itr;
	cout << "\n" << "Displaying whats in the map stateDataMap: " << "\n";
	for (itr = stateDataMap.begin(); itr != stateDataMap.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

}

void Map::displayCapital(map< string, string > stateDataMap) { // Taking user input as state.
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
	Map m;
	map < string, string > stateDataMap;
	stateDataMap.insert(make_pair("Nebraska", "Lincoln"));
	stateDataMap.insert(make_pair("New York", "Albany"));
	stateDataMap.insert(make_pair("Ohio", "Columbus"));
	stateDataMap.insert(make_pair("California", "Sacramento"));
	stateDataMap.insert(make_pair("Massachusetts", "Boston"));
	stateDataMap.insert(make_pair("Texas", "Austin"));


	m.display(stateDataMap); // Calling display method to print the map.

	stateDataMap["California"] = "Los Angeles";

	m.display(stateDataMap);
	m.displayCapital(stateDataMap); // Calling method where user can input the state name

	return 0;
}
