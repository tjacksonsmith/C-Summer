//
//  main.cpp
//  Convert_Currency
//
//  Created by Timothy Smith on 6/20/16.
//  Copyright © 2016 Timothy Smith. All rights reserved.
//

#include <iostream>
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
    constexpr double yen_to_dollar=0.0096;
    constexpr double kroner_to_dollar=0.15;
    constexpr double pound_to_dollar=1.47;
    double amount_in=1;
    string unit=" ";
    cout<<" Please enter currency amount and designation(yen, kroners, or pounds)\n";
    cin>>amount_in>>unit;
    
    if(unit=="yen")
        cout<<amount_in<<" yen =="<<yen_to_dollar*amount_in<<" dollars\n";
    else if(unit=="kroners")
        cout<<amount_in<<"in kroner =="<<kroner_to_dollar*amount_in<<" dollars\n";
    else if(unit== "pounds")
        cout<<amount_in<<" in pound=="<<pound_to_dollar*amount_in<< " dollars\n";
    else
        cout<< " cannot calculate currency conversion\n";
    
    
}
    
    
    
    
    
    
    
