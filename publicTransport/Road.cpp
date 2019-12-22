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
    
}
Road::Road(string roadName){
    this->roadName=roadName;
}
Road::~Road(){
    
}
void Road::setroadName(string roadName){
      this->roadName=roadName;
}
string Road::getroadName(){
    return roadName;
}
