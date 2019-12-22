#include "CSVreader.h"

CSVreader::CSVreader() {
	string fileName = "suprBus.csv";
	ifstream myFile;
	this->text = "";
	myFile.open(fileName);
	while (myFile.good()) {
		string line;
		getline(myFile, line, '\n');
		this->text += line+ '\n';
	}
}

CSVreader::~CSVreader() {

}

void CSVreader::setStations(vector<Station> &stations) {

}

void CSVreader::setLines(vector<Line> &lines) {

}

void CSVreader::setAreas(vector<Area> &areas) {

}