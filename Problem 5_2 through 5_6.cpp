//
//  main.cpp
//  Problem_5.2
// The following program take in a temertature value in Celsius and coverts it to Kelvin. This code has many errors in it. Find the errors, list them , and correct the code.
//  Created by Timothy Smith on 6/27/16.
//  Copyright © 2016 Timothy Smith. All rights reserved.
//

# include "std_lib_facilities.h"
double temp(double c)
{
    return c+273.15;   //   was orginally a int  delted and just left the function
}
double temp2(double c)
{
    return c-273.15;
}
int main()
{   char unit=0;            // added unit to reduce error
    double c=0;
    double k=0;
    cout<<" Please enter temperature and unit C or K for celsius or Kelvin.\n";
    cin>>c>>unit;
    if((unit=='c'&& c>-273.15) || (unit=='C' && c>-273.15)){ // added if statement to prevent entry errors and 5.3                                     addition
        
    k=temp(c); // Changed from d to c so the temperature had a proper identifier and added temp function
        cout<< k<<" Kelvin\n";} // Cout replaced with cout
    else if ((unit=='k' && c>0) || (unit=='K' && c>0)){  // Problem 5.5 / 5.6 addition
             k=temp2(c);
        cout<<k<<" Celsius\n";}
    else
        cout<<" Check units and or  temperature\n";
}
