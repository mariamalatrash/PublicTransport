//
//  location.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
#include "Location.h"



Location::Location(){
	this->longitude = 0;
	this->latitude = 0;
}

Location::Location(int longitude,int latitude){
    this->longitude=longitude;
    this->latitude=latitude;
}

Location::~Location(){
    
}

void Location::setLongitude(int longitude){
    this->longitude=longitude;
}
void Location::setLatitude(int latitude){
    this->latitude=latitude;
}
int Location::getLongitude(){
    return longitude;
}
int Location::getLatitude(){
    return latitude;
}
string Location::toString(){
    string strlongitude=to_string(longitude);
    string strlatitude= to_string(latitude);
    return "Longitude: "+strlongitude+", latitude: "+strlatitude+"\n";
}
