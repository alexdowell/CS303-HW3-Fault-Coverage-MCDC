#ifndef MAP_H_
#define MAP_H_
#include <map>
#include <string>
using namespace std;
using std::string;

class Map {
	public:
		
		//Map display function
		void display(map< string, string > stateDataMap);

		// display capital when user inputs a state
		void displayCapital(map< string, string > stateDataMap);

};


#endif