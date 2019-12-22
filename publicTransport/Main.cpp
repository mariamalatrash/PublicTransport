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

void printChoices() {
	cout << "Welcome to our public transport partial app:" << endl;
	cout << "(Please choose one of the following)" << endl;
	cout << "1. Show all bus lines." << endl;
	cout << "2. Show lines by area." << endl;
	cout << "7. Stations that have more than one line." << endl;
	cout << "8. exit." << endl;
}

void showAllBusLines() {

}

void showLinesByArea() {

}

void showMultiLineStations() {

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