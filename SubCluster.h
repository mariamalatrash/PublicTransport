//
//  SubCluster.h
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef SubCluster_h
#define SubCluster_h
#pragma once
#include<iostream>
using namespace std;

class Sub_Cluster{
private:
    int clusterCode;
    string clusterName;
    string SubClusterName;
    string district;
public:
    Sub_Cluster();
    Sub_Cluster(int clusterCode,string clusterName,string SubClusterName,string district);
    ~Sub_Cluster();
    void setclusterCode(int clusterCode);
    void setclusterName(string clusterName);
    void setSubClusterName(string SubClusterName);
    void setdistrict(string district);
    int getclusterCode();
    string getclusterName();
    string getSubClusterName();
    string getdistrict();
    string ToStringSubCluster();
 
    
};
#endif /* SubCluster_h */
