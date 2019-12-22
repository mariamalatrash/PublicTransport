//
//  City.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef City_h
#define City_h
#pragma once
#include<iostream>
using namespace std;
class City{
private:
    int cityCode;
    string cityName;
public:
    City();
    City(int cityCode,string cityName);
    ~City();
    void setcityCode(int cityCode);
    void setcityName(string cityName);
    int getcityCode();
    string getcityName();
    string ToStringCity();
};

#endif /* City_h */
