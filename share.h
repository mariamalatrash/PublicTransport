//
//  share.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef share_h
#define share_h
#pragma once
#include<iostream>
using namespace std;

class Share{
private:
    int shareCode;
    string shareDescription;
public:
    Share();
    Share(int shareCode,string shareDescription);
    ~Share();
    void setshareCode(int shareCode);
    void setshareDescription(string shareDescription);
    int getshareCode();
    string getshareDescription();
    string ToStringShare();
};
#endif /* share_h */
