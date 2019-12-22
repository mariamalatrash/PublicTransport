//
//  station.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef station_h
#define station_h
#pragma once
#include<iostream>
using namespace std;
#include "location.h"
#include "share.h"
class Station{
private:
    int stationSerialNumber;
    string stationName;
    int action;
    int floor;
    int platform;
    Location location;
    bool status;
    Share share;
public:
    Station();
    Station(int stationSerialNumber,string stationName,int action,int floor,int platform,Location location,bool status,Share share);
    ~Station();
    void setstationSerialNumber(int stationSerialNumber);
    void setstationName(string stationName);
    void setaction(int action);
    void setfloor(int floor);
    void setplatform(int platform);
    void setlocation(Location location);
    void setstatus(bool status);
    void setshare(Share share);
    int getstationSerialNumber();
    string getstationName();
    int getaction();
    int getfloor();
    int getplatform();
    Location getlocation();
    bool getstatus();
    Share getshare();
    string ToStringStation();
    
};

#endif /* station_h */
