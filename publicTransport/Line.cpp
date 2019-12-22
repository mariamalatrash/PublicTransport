//
//  line.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
#include "line.h"


Line::Line(){
    
}
Line::Line(string companyName,int makatCode,int lineCode,int dirction,int alternation,vector <int >path){
    this->companyName=companyName;
    this->makatCode=makatCode;
    this->lineCode=lineCode;
    this->dirction=dirction;
    this->alternation=alternation;
    this->path=path;
}
Line::~Line(){
    
}
void Line::setcompanyName(string companyName){
    this->companyName=companyName;
}
void Line::setmakatCode(int makatCode){
    this->makatCode=makatCode;
}
void Line::setlineCode(int lineCode){
    this->lineCode=lineCode;
}
void Line::setdirction(int dirction){
    this->dirction=dirction;
}
void Line::setalternation(int alternation){
    this->alternation=alternation;
}
void Line::setpath(vector <int >path){
    this->path=path;
}
string Line::getcompanyName(){
    return companyName;
}
int Line::getmakatCode(){
    return makatCode;
}
int Line::getlineCode(){
    return lineCode;
}
int Line::getdirction(){
    return dirction;
}
int Line::getalternation(){
    return alternation;
}
vector <int > Line::getpath(){
    return path;
}
//string Line::ToStringLine(){
//    string strmakatCode=to_string(makatCode);
//    string strlineCode=to_string(lineCode);
//    string strdirction=to_string(dirction);
//    string stralternation=to_string(alternation);
//    return companyName+""+strmakatCode+""+strlineCode+""+strdirction+""+stralternation;
//}


