#ifndef MAP_H_
#define MAP_H_
#include <map>
#include <string>
using namespace std;
using std::string;

class Map {
	public:
		void display(map< string, string > stateDataMap);

		void displayCapital(map< string, string > stateDataMap);

};


#endif