//
//  Coin_Problem.cpp
//  Problem3.11
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
    cout<<"how manny pennies do you have\n";
    int pennies;
    cin>>pennies;
    cout<< "how many nickels do you have?\n";
    int nickels;
    cin>>nickels;
    cout<<"how many dimes do you have?\n";
    int dimes;
    cin>> dimes;
    cout<< "how many half dollars do you have?\n";
    int half_dollars;
    cin>> half_dollars;
    cout<<" how many dollars do you have?\n";
    int dollars;
    cin>>dollars;
    cout<< " you have "<<pennies<< " pennies.\n";
    cout<< " you have "<<nickels<<" nickels\n";
    cout<< " you have "<<dimes<<" dimes\n";
    cout<<" you have "<<half_dollars<<" half dollars\n";
    cout<<" you have "<<dollars<< "dollars\n";
    cout<<"\n";
    cout<<" for a total of "<<pennies+nickels*5+dimes*10+half_dollars*50+dollars*100<<" cents\n";
    cout<<"\n";
    cout<<" or $"<<pennies*0.01+nickels*0.05+dimes*0.10+half_dollars*0.50+dollars<<"\n";
    
    return 0;
}