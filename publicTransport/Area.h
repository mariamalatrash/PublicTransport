//
//  Area.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef Area_h
#define Area_h
#pragma once
#include<iostream>
#include <vector>
using namespace std;

class Area{
private:
    int AreaCode;
    string AreaName;
    vector <int>lines;
public:
    Area();
	Area(int AreaCode, string AreaName);
    Area(int AreaCode,string AreaName,vector <int>lines);
    ~Area();
    void setAreaCode(int AreaCode);
    void setAreaName(string AreaName);
    void setLines(vector <int>lines);
	void addLine(int line);
    int getAreaCode();
    string getAreaName();
    vector<int> getlines();
    string toString();
};
#endif /* Area_h */
