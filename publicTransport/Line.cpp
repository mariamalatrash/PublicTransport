//
//  line.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
#include "Line.h"


Line::Line(){
	this->companyName = "Empty";
	this->makatCode = -1;
	this->lineCode = -1;
	this->dirction = "Haloch";
	this->alternative = -1;
}

Line::Line(string companyName,int makatCode,int lineCode, string dirction,int alternative,vector <int >path){
    this->companyName=companyName;
    this->makatCode=makatCode;
    this->lineCode=lineCode;
    this->dirction=dirction;
    this->alternative = alternative;
    this->path=path;
}

Line::~Line(){
    
}

void Line::setCompanyName(string companyName){
    this->companyName=companyName;
}

void Line::setMakatCode(int makatCode){
    this->makatCode=makatCode;
}

void Line::setLineCode(int lineCode){
    this->lineCode=lineCode;
}

void Line::setDirction(int dirction){
    this->dirction=dirction;
}

void Line::setAlternative(int alternation){
    this->alternative=alternation;
}

void Line::setPath(vector <int >path){
    this->path=path;
}

void Line::addStationToPath(int stationCode) {
	this->path.push_back(stationCode);
}

string Line::getCompanyName(){
    return companyName;
}

int Line::getMakatCode(){
    return makatCode;
}

int Line::getLineCode(){
    return lineCode;
}

string Line::getDirction(){
    return dirction;
}

int Line::getAlternative(){
    return alternative;
}

vector <int > Line::getPath(){
    return path;
}

string Line::toString(){
    string strmakatCode=", makat: "+to_string(makatCode);
    string strlineCode=", line code: "+to_string(lineCode);
    string stralternative=",Alternative line: "+to_string(alternative);
    return "Company: "+companyName+strmakatCode+strlineCode+", direction: "+dirction+ stralternative;
}


