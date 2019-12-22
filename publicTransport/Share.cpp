//
//  share.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
#include "Share.h"


Share::Share(){
	this->shareCode = -1;
	this->shareDescription = "Empty";
}

Share::Share(int shareCode,string shareDescription){
    this->shareCode=shareCode;
    this->shareDescription=shareDescription;
}

Share::~Share() {

}

void Share::setShareCode(int shareCode){
    this->shareCode=shareCode;
}
void Share::setShareDescription(string shareDescription){
    this->shareDescription=shareDescription;
}

int Share::getshareCode(){
    return shareCode;
}

string Share::getshareDescription(){
    return shareDescription;
}

string Share::toString(){
    string strshareCode = to_string(shareCode);
    return "Share code: "+strshareCode+", share description: "+shareDescription;
}
