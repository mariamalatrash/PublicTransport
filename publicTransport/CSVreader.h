#pragma once
#include <iostream>
#include <fstream>
#include<string>
#include "Area.h"
#include "Station.h"
#include "Line.h"
using namespace std;

class CSVreader {
private:
	vector<vector<string>> text;
	string& readFromCSV();
	vector<vector<string>>& splitText(string& text);
public:
	CSVreader();
	~CSVreader();
	void setStations(vector<Station> &stations);
	void setLines(vector<Line> &lines);
	void setAreas(vector<Area> &areas);
};
