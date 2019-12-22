//
//  location.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
using namespace std;
#include "location.h"



Location::Location(){
    
}
Location::Location(int longitude,int latitude){
    this->longitude=longitude;
    this->latitude=latitude;
}
Location::~Location(){
    
}
void Location::setlongitude(int longitude){
    this->longitude=longitude;
}
void Location::setlatitude(int latitude){
    this->latitude=latitude;
}
int Location::getlongitude(){
    return longitude;
}
int Location::getlatitude(){
    return latitude;
}
//string Location::ToStringLocation(){
//    string strlongitude=to_string(longitude);
//    string strlatitude= to_string(latitude);
//    return "longitude:"+strlongitude+" latitude:"+strlatitude+"\n";
//}
