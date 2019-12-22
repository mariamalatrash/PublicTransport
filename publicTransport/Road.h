//
//  Road.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef Road_h
#define Road_h
#pragma once
#include<iostream>
using namespace std;

class Road{
private:
    string roadName;
public:
    Road();
    Road(string roadName);
    ~Road();
    void setRoadName(string roadName);
    string getRoadName();
	string toString();
    
};
#endif /* Road_h */
