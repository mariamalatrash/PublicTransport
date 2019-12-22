//
//  station.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
#include "station.h"
#include "location.h"
#include "share.h"

Station::Station(){
	this->stationSerialNumber = -1;
	this->stationName = "Empty";
	this->action = -1;
	this->floor = -1;
	this->platform = -1;
	this->location = Location();
	this->status = false;
	this->share = Share();
}

Station::Station(int stationSerialNumber,string stationName,int action,int floor,int platform,Location location,bool status,Share share, vector<vector<int>> lines){
    this->stationSerialNumber=stationSerialNumber;
    this->stationName=stationName;
    this->action=action;
    this->floor=floor;
    this->platform=platform;
    this->location=location;
    this->status=status;
    this->share=share;
	this->lines = lines;
}

Station::~Station(){
    
}

void Station::setStationSerialNumber(int stationSerialNumber){
    this->stationSerialNumber=stationSerialNumber;
}

void Station::setStationName(string stationName){
    this->stationName=stationName;

}

void Station::setAction(int action){
    this->action=action;
}

void Station::setFloor(int floor){
    this->floor=floor;
}

void Station::setPlatform(int platform){
    this->platform=platform;
}

void Station::setLocation(Location location){
    this->location=location;
}

void Station::setStatus(bool status){
    this->status=status;
}

void Station::setShare(Share share){
     this->share=share;
}

void Station::setLines(vector<vector<int>> lines) {
	this->lines = lines;
}

void Station::addLine(int lineCode, int order) {
	vector<int> line;
	line.push_back(lineCode);
	line.push_back(order);
	lines.push_back(line);
}


int Station::getStationSerialNumber(){
    return stationSerialNumber;
}

string Station::getStationName(){
    return stationName;
}

int Station::getAction(){
    return action;
}

int Station::getFloor(){
    return floor;
}

int Station::getPlatform(){
    return platform;
}

Location Station::getLocation(){
    return location;
}

bool Station::getStatus(){
    return status;
}

Share Station::getShare(){
    return share;
}

//TODO: reformat the returned str
string Station::toString(){
    string strstationSerialNumber=to_string(stationSerialNumber);
    string straction =to_string(action);
    string strfloor =to_string(floor);
    string strplatform =to_string(platform);
    string strStatus=status ? "Active":"not Active";
  return"Station serial number: "+strstationSerialNumber+", Station name: "+stationName+", Action: "+straction+", Floor:"+strfloor+", Platform:"+strplatform+", Location: "+location.ToStringLocation()+",Status: "+strStatus+", Share:"+share.ToStringShare();
}
