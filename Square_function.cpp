

//
//  main.cpp
//  Test
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


int square(int x)
{
    return x*x;
}
int main()
{   for(int number=0;number<=10;++number){
    cout<<square(number)<<"\n";}
}