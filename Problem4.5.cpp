//
//  main.cpp
//  Problem4.5
//
//  Created by Timothy Smith on 6/21/16.
//  Copyright © 2016 Timothy Smith. All rights reserved.
//

#include "std_lib_facilities.h"


int main()
{
    double value1;
    double value2;
    char sign =' ';
    cout<< "Please enter two values followed by and addition,subtraction, multiplication or division sign\n";
    cin>>value1>>value2>>sign;
    switch (sign) {
        case '+':  // addition
        cout<< "the sum is "<<value2+value1<<"\n";
        break;
            // subtraction
            case '-':
            cout<< " the sum is "<<value1-value2<<"\n";
            break;
            // multiply
            case '*':
            cout<< "the sum is " << value1*value2<<"\n";
            break;
            // divide
            case '/':
            cout<< "the sum is "<<value1/value2<<"\n";
            break;
            default:
            cout<<" I dont understand the sign you used\n";
            break;
            
            
    }


}