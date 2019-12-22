#include "CSVreader.h"

CSVreader::CSVreader() {
	//read all text
	string fullText = readFromCSV();
	//split text
	this->text = splitText(fullText);
}

string& CSVreader::readFromCSV() {
	string fileName = "suprBus.csv";
	ifstream myFile;
	static string result = "";
	myFile.open(fileName);
	while (myFile.good()) {
		string line;
		getline(myFile, line, '\n');
		result += line + '\n';
	}
	return result;
}

vector<vector<string>>& CSVreader::splitText(string& fullText) {
	static vector<vector<string>> result;
	cout << fullText.size()<<endl;
	return result;
}

CSVreader::~CSVreader() {

}

void CSVreader::setStations(vector<Station> &stations) {

}

void CSVreader::setLines(vector<Line> &lines) {

}

void CSVreader::setAreas(vector<Area> &areas) {

}