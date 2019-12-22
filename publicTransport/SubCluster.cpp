//
//  main.cpp
//  project
//
//  Created by user on 21/12/2019.
//  Copyright © 2019 user. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#include "SubCluster.h"

Sub_Cluster::Sub_Cluster(){
	this->clusterCode = -1;
	this->clusterName = "Empty";
	this->SubClusterName = "Empty";
	this->district = "Empty";
}

Sub_Cluster::Sub_Cluster(int clusterCode,string clusterName,string SubClusterName,string district){
     this->clusterCode=clusterCode;
     this->clusterName=clusterName;
     this->SubClusterName=SubClusterName;
     this->district=district;
}

Sub_Cluster::~Sub_Cluster(){
    
}

void Sub_Cluster::setclusterCode(int clusterCode){
    this->clusterCode=clusterCode;
}

void Sub_Cluster::setclusterName(string clusterName){
    this->clusterName=clusterName;
}

void Sub_Cluster::setSubClusterName(string SubClusterName){
    this->SubClusterName=SubClusterName;
}

void Sub_Cluster::setdistrict(string district){
    this->district=district;
}

int Sub_Cluster::getclusterCode(){
    return clusterCode;
}

string Sub_Cluster::getclusterName(){
    return clusterName;
}

string Sub_Cluster::getSubClusterName(){
    return SubClusterName;
}

string Sub_Cluster::getdistrict(){
    return district;
}

//TODO: reformat the returned str
string Sub_Cluster::toString(){
    string strclusterCode= to_string(clusterCode);
    return "Cluster code: "+strclusterCode+",Cluster name: "+clusterName+",Sub cluster name: "+SubClusterName+",district: "+district;
}
