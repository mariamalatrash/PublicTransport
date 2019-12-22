//
//  City.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
#include "City.h"

City::City(){
	this->cityCode = -1;
	this->cityName = "Empty";
}

City::City(int cityCode,string cityName){
    this->cityCode=cityCode;
    this->cityName=cityName;
}

City::~City(){
    
}

void City::setcityCode(int cityCode){
    this->cityCode=cityCode;
}

void City::setcityName(string cityName){
    this->cityName=cityName;
}

int City::getcityCode(){
    return cityCode;
}

string City::getcityName(){
    return cityName;
}

string City::toString(){
    string strcityCode = "City code: " + to_string(cityCode);
    return strcityCode+", city name: "+cityName;
}

