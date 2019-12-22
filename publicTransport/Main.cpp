#include <iostream>
#include <fstream>
#include<string>
#include "SubCluster.h"
#include "Area.h"
#include "City.h"
#include "Station.h"
#include "Share.h"
#include "Line.h"
#include "Location.h"
#include "Road.h"
using namespace std;

vector<Station> stations;
vector<Line> lines;
vector<Area> areas;

void initializeGlobalVariables() {
	string fileName = "suprBus.csv";
	ifstream myFile;
	string file;
	int count = 0;
	myFile.open(fileName);
	while (myFile.good()&&count <5) {
		count++;
		string line;
		getline(myFile, line, '\n');
		file += line+"\n\n";
	}
	cout << file << endl;
}

int main() {
	/*
	//testing Area class
	Area a;
	a = Area();
	cout << a.toString().c_str()<<endl;
	//testing City class
	City c;
	c = City();
	cout << c.toString().c_str() << endl;
	//testing Line class
	Line l;
	l = Line();
	cout << l.toString().c_str() << endl;
	//testing Location class
	Location l1;
	l1 = Location();
	cout << l1.toString().c_str() << endl;
	//testing Road class
	Road r;
	r = Road();
	cout << r.toString().c_str() << endl;*/

	initializeGlobalVariables();


	getchar();
	return 0;
}