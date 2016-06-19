//
//  ordered_number_integer.cpp
//  ordered_integer_values
//
//  Created by Timothy Smith on 6/18/16.
//  Copyright © 2016 Timothy Smith. All rights reserved.
//

#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>
using namespace std;

int main()
{
 cout<<" please enter integer values\n";
    int value1;
    int value2;
    int value3;
    while (cin>>value1>>value2>>value3) {
        
        if (value3<=value2 && value3<=value1 && value2<=value1) {
        cout<<value3<<","<<value2<<","<<value1<<"\n";
        }
        if (value3<=value1 && value3<=value2 && value1<=value2) {
            cout<<value3<<","<<value1<<","<<value2<<"\n";
        }
        if (value2<=value1 && value2<=value3 && value1<=value3) {
            cout<<value2<<","<<value1<<","<<value3<<"\n";
        }
        if (value2<=value1 && value2<=value3 && value3<=value1) {
            cout<<value2<<","<<value3<<","<<value1<<"\n";
        }
        if (value1<=value2 && value1<=value3 && value2<=value3) {
            cout<<value1<<","<<value2<<","<<value3<<"\n";
        }
        if (value1<=value2 && value1<=value3 && value3<=value2) {
            cout<<value1<<","<<value3<<","<<value2<<"\n";
        }
        return  0;  }
    
    
}