//
//  City.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
using namespace std;
#include "City.h"

City::City(){
    
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
string City::ToStringCity(){
    string strcityCode=to_string(cityCode);
    return strcityCode+" "+cityName+" ";
}

