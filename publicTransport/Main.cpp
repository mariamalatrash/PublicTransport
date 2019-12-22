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
#include "CSVreader.h"
using namespace std;

vector<Station> stations;
vector<Line> lines;
vector<Area> areas;

void initializeGlobalVariables() {
	CSVreader csvReader;
	csvReader = CSVreader();
	csvReader.setStations(stations);
	csvReader.setLines(lines);
	csvReader.setAreas(areas);
}

void printChoices() {
	cout << "Welcome to our public transport partial app:" << endl;
	cout << "(Please choose one of the following)" << endl;
	cout << "1. Show all bus lines." << endl;
	cout << "2. Show lines by area." << endl;
	cout << "7. Stations that have more than one line." << endl;
	cout << "8. exit." << endl;
}

void showAllBusLines() {
	string result = "";
	for (int i = 0; i < lines.size(); i++) {
		result += (lines[i].toString()+"\n");
	}
	cout << result << endl;
}

void showLinesByArea() {
	string result = "";
	for (int i = 0; i < areas.size(); i++) {
		result += (areas[i].toString() + "\n");
	}
	cout << result << endl;
}

void showMultiLineStations() {
	string result = "Stations with multiple lines: ";
	for (int i = 0; i < stations.size(); i++)
		if (stations[i].getLines().size() > 1)
			result += stations[i].getStationSerialNumber()+", ";
	cout << result << endl;
}

int decideFunctionAccordingToUserChoice() {
	int choice;
	cin >> choice;
	switch (choice) {
	case 1:
		showAllBusLines();
		break;
	case 2:
		showLinesByArea();
		break;
	case 7:
		showMultiLineStations();
		break;
	case 8:
		return 0;
	}
	return choice;
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

	do {
		printChoices();
	} while (decideFunctionAccordingToUserChoice() != 0);

	return 0;
}