//
//  val1_and_val2.cpp
//  Problem_3.4
//
//  Created by Timothy Smith on 6/17/16.
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
    cout<<"Please enter two integer values\n";
    int val1;
    int val2;
    while (cin>>val1>>val2) {
        cout<<" sum=="<<val2+val1
            <<" difference=="<<abs(val1-val2)
            <<" product=="<<val2*val1
            <<" ratio=="<<val1<<"/"<<val2<<"\n";
        
        
        if (val1>val2) {
            cout<<"value one, ("<<(val1)<<") is larger\n";
            cout<< "value two, ("<<(val2)<<") is smaller\n";
        }
        if (val1<val2) {
            cout<< "value one, ("<< (val1)<< ") is smaller\n";
            cout<< "value two, (" << (val2)<< ") is larger\n";
        }
        
        
        return 0; }
    
    
}