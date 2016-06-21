//
//  main.cpp
//  Problem_4.3
//
//  Created by Timothy Smith on 6/21/16.
//  Copyright © 2016 Timothy Smith. All rights reserved.
//

#include "std_lib_facilities.h"

int main()
{
    vector<double> distances;
    for (double distance; cin>>distance;)
        distances.push_back(distance);
    
    // compute the sum of the distances between cities
    double sum=0;
    for(double x:distances) sum +=x;
    cout<< "Sum of distances "<<sum<<"\n";
    
    // Average distance between cities
    sort(distances);
    cout<< "Average distance "<<sum/distances.size()<<"\n";
    
    // max and min distances between cities
    double min= distances[0];
        cout<<"min=="<<min<<"\n";
    double max=*max_element(begin(distances), end(distances));
    cout<< "max is "<<max<<"\n";
        }

    
    
    

