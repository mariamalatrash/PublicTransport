//
//  station.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
using namespace std;
#include "station.h"
#include "location.h"
#include "share.h"

Station::Station(){
    
}
Station::Station(int stationSerialNumber,string stationName,int action,int floor,int platform,Location location,bool status,Share share){
    this->stationSerialNumber=stationSerialNumber;
    this->stationName=stationName;
    this->action=action;
    this->floor=floor;
    this->platform=platform;
    this->location=location;
    this->status=status;
    this->share=share;
    
}
Station::~Station(){
    
}
void Station::setstationSerialNumber(int stationSerialNumber){
    this->stationSerialNumber=stationSerialNumber;
}
void Station::setstationName(string stationName){
    this->stationName=stationName;

}
void Station::setaction(int action){
    this->action=action;
}
void Station::setfloor(int floor){
    this->floor=floor;
}
void Station::setplatform(int platform){
    this->platform=platform;
}
void Station::setlocation(Location location){
    this->location=location;
}
void Station::setstatus(bool status){
    this->status=status;
}
void Station::setshare(Share share){
     this->share=share;
}
int Station::getstationSerialNumber(){
    return stationSerialNumber;
}
string Station::getstationName(){
    return stationName;
}
int Station::getaction(){
    return action;
}
int Station::getfloor(){
    return floor;
}
int Station::getplatform(){
    return platform;
}
Location Station::getlocation(){
    return location;
}
bool Station::getstatus(){
    return status;
}
Share Station::getshare(){
    return share;
}
string Station::ToStringStation(){
    string strstationSerialNumber=to_string(stationSerialNumber);
    string straction =to_string(action);
    string strfloor =to_string(floor);
    string strplatform =to_string(platform);
  return"stationSerialNumber:"+strstationSerialNumber+" stationName:"+stationName+" action:"+straction+" floor:"+strfloor+" platform:"+strplatform+" location:"+location.ToStringLocation()+" share:"+share.ToStringShare();
}
