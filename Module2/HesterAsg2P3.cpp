// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 2 Problem 3

// This program is for Joe's Pizza Palace. It will be able to tell the user how many 
// slices a pizza can be divided into. 

#include <iostream>
#include <iomanip>	
#include <cmath>
using namespace std;

const float pi = 3.14159;
const float slice = 14.125;
float diameter;
float numSlices;
float area;
float radius;


int main()
{
    cout << "" << endl;
    cout << setprecision(1)<<fixed<<showpoint;

    cout << "Enter the diameter of the pizza (in inches): " << endl;
    cin >> diameter;

    radius = diameter/2;
    area = pi * (pow(radius,2));
    numSlices = area/slice;
    
    cout << "The number of slices your pizza can be divided into is: " << numSlices << endl;
    


return 0;    
}
