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
#include <vector>
#include "location.h"
#include "share.h"

using namespace std;


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
		vector<vector<int>> lines;
	public:
		Station();
		Station(int stationSerialNumber,string stationName,int action,int floor,int platform,Location location,bool status,Share share, vector<vector<int>> lines);
		~Station();
		void setStationSerialNumber(int stationSerialNumber);
		void setStationName(string stationName);
		void setAction(int action);
		void setFloor(int floor);
		void setPlatform(int platform);
		void setLocation(Location location);
		void setStatus(bool status);
		void setShare(Share share);
		void setLines(vector<vector<int>> lines);
		void addLine(int lineCode,int order);
		int getStationSerialNumber();
		string getStationName();
		int getAction();
		int getFloor();
		int getPlatform();
		Location getLocation();
		bool getStatus();
		Share getShare();
		vector<vector<int>> getLines();
		string toString();
    
};

#endif /* station_h */
