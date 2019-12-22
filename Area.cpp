//
//  Area.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
using namespace std;
#include "Area.h"
    
Area::Area(){
    
}
Area::Area(int AreaCode,string AreaName,vector <int>lines){
    this->AreaCode=AreaCode;
    this->AreaName=AreaName;
    this->lines=lines;
}
Area::~Area(){
    
}
void Area::setAreaCode(int AreaCode){
    this->AreaCode=AreaCode;
}
void Area::setAreaName(string AreaName){
    this->AreaName=AreaName;
}
void Area::setline(vector <int>lines){
    this->lines=lines;
}
int Area::getAreaCode(){
    return AreaCode;
}
string Area::getAreaName(){
    return AreaName;
}
vector<int> Area::getlines(){
    return lines;
}
string Area::ToStringArea(){
    string strAreaCode=to_string(AreaCode);
    return strAreaCode+" "+AreaName;
}

