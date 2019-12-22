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
	string text;
public:
	CSVreader();
	~CSVreader();
	void setStations(vector<Station> &stations);
	void setLines(vector<Line> &lines);
	void setAreas(vector<Area> &areas);
};
