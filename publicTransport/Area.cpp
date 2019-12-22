//
//  Area.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
#include <string>
#include "Area.h"

using namespace std;

Area::Area(){
	this->AreaCode = -1;
	this->AreaName = "";
}

Area::Area(int AreaCode,string AreaName,vector <int>lines){
    this->AreaCode=AreaCode;
    this->AreaName=AreaName;
    this->lines=lines;
}

Area::~Area(){
    
}

void Area::setAreaCode(int AreaCode){
    this->AreaCode=AreaCode;
}

void Area::setAreaName(string AreaName){
    this->AreaName=AreaName;
}

void Area::setLines(vector <int>lines){
    this->lines=lines;
}

void Area::addLine(int line) {
	this->lines.push_back(line);
}

int Area::getAreaCode(){
    return AreaCode;
}

string Area::getAreaName(){
    return AreaName;
}

vector<int> Area::getlines(){
    return lines;
}

//TODO: add lines
string Area::toString(){
    string strAreaCode = "Area code:" + to_string(AreaCode);
    return strAreaCode + ", Area Name:" + AreaName;
}

