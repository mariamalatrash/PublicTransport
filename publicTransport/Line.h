//
//  line.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef line_h
#define line_h
#pragma once
#include<iostream>
#include <vector>
using namespace std;

class Line{
private:
    string companyName;
    int makatCode;
    int lineCode;
    int dirction;
    int alternation;
    vector <int >path;
public:
    Line();
    Line(string companyName,int makatCode,int lineCode,int dirction,int alternation,vector <int >path);
    ~Line();
    void setcompanyName(string companyName);
    void setmakatCode(int makatCode);
    void setlineCode(int lineCode);
    void setdirction(int dirction);
    void setalternation(int alternation);
    void setpath(vector <int >path);
    string getcompanyName();
    int getmakatCode();
    int getlineCode();
    int getdirction();
    int getalternation();
    vector <int > getpath();
    string ToStringLine();
};
#endif /* line_h */
