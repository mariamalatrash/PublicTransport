//
//  location.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef location_h
#define location_h
#pragma once
#include<iostream>
using namespace std;


class Location{
private:
    int longitude;
    int latitude;
public:
    Location();
    Location(int longitude,int latitude);
    ~Location();
    void setlongitude(int longitude);
    void setlatitude(int latitude);
    int getlongitude();
    int getlatitude();
    string ToStringLocation();
};

#endif /* location_h */
