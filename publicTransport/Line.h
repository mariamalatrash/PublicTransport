//
//  line.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef line_h
#define line_h
#pragma once
#include<iostream>
#include <vector>
using namespace std;

class Line{
private:
    string companyName;
    int makatCode;
    int lineCode;
    string dirction;//haloch chazor circular
    int alternative;
    vector <int> path;
public:
    Line();
    Line(string companyName,int makatCode,int lineCode, string dirction,int alternation,vector <int >path);
    ~Line();
    void setCompanyName(string companyName);
    void setMakatCode(int makatCode);
    void setLineCode(int lineCode);
    void setDirction(int dirction);
    void setAlternative(int alternation);
    void setPath(vector <int >path);
	void addStationToPath(int stationCode);
    string getCompanyName();
    int getMakatCode();
    int getLineCode();
	string getDirction();
    int getAlternative();
    vector <int > getPath();
    string toString();
};
#endif /* line_h */
