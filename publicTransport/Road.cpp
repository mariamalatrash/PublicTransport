//
//  Road.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
using namespace std;
#include "Road.h"


Road::Road(){
	this->roadName = "Empty";
}

Road::Road(string roadName){
    this->roadName=roadName;
}

Road::~Road(){
    
}

void Road::setRoadName(string roadName){
      this->roadName=roadName;
}
string Road::getRoadName(){
    return roadName;
}
string Road::toString() {
	return "Road: " + roadName;
}
