//
// Drill_chapter3.cpp
//  Drill_Chapter_3
//
//  Created by Timothy Smith on 6/17/16.
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
    cout<< " please enter our first name of letter recipient:\n";
    string first_name;
    cin>> first_name;                           // enter name in output section
    cout<<" Dear "<<first_name<<",\n";
    cout<<"How are you? I hope you're doing well. Can't wait to see you in July!\n";
    cout<<"Please enter the sisters names\n";
    string friend_name;                             // first sister name
    string daughter_name;                            // string for second sister name
    cin>> friend_name>>daughter_name;
    string sisters=friend_name+" and "+daughter_name;   // combines sisters names
    cout<< " I hope "<<sisters<<" aren't giving you to much trouble.\n";
    string trouble="0";
    cout<<" If they are giving you trouble enter Yes or No for no trouble at all\n";
    trouble="Yes";
    trouble="No";
    while(cin>>trouble) {
        if (trouble=="Yes") {
        cout<< " give them a good scolding.\n";
        }
    if (trouble=="No") {
        cout<< " I guess take them out to lunch.\n";
    }
        cout<<" I'll be home the 21st through the 27th,";
        cout<<" would you like to go out for an birthday celebration on the 24th? Also, do you know how old I'll be?";
        cout<<" please enter age";
        int age;
        cin>> age;
        if (age<29) {
            cout<<" I'm a little older than that,I'll be 29.\n";
        }
        if (age==29) {
            cout<<" Right On!\n";
        }
        if (age>29) {
            cout<< "wow, I'm not Seth or Zach!\n";}
        cout<< "Anyways,see you in July!\n";
        return 0;
        }
    }

    
   
