//
//  Repeated_word_3.6.cpp
//  Repeated_Word
//
//  Created by Timothy Smith on 6/16/16.
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
    string previous=" ";     // previous word; initialized to "not a word"
    string current;         // current word
    while (cin>>current){               // read at stream of words
        if(previous==current)           //check if the word is the same as last
            cout<< "repeated word:"<< current<<'\n';
        previous=current;
    }


}

