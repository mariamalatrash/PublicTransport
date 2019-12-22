//
//  share.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
using namespace std;
#include "share.h"


Share::Share(){
    
}
Share::Share(int shareCode,string shareDescription){
    this->shareCode=shareCode;
    this->shareDescription=shareDescription;
}
Share::~Share(){
    
}
void Share::setshareCode(int shareCode){
    this->shareCode=shareCode;
}
void Share::setshareDescription(string shareDescription){
    this->shareDescription=shareDescription;
}
int Share::getshareCode(){
    return shareCode;
}
string Share::getshareDescription(){
    return shareDescription;
}
//string Share::ToStringShare(){
//    string strshareCode=to_string(shareCode);
//    return "shareCode: "+strshareCode+" shareDescription:"+shareDescription+"\n";
//}
