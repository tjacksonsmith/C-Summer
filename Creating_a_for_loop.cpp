// Timothy Smith
// Creating_a _for_loop


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
{    char letter='a';
    char letter2='A';
    for (int number=97; number<123; ++number) {
        cout<<letter<<'\t'<<number<<'\t'<<letter2<<'\t'<<number+26<<'\n';
        ++letter;
        ++letter2;
    }
}
