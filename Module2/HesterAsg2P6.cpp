// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 2 Problem 6

// This program will take in a temperature in Celsius and convert it to Farenheit.

#include <iostream>	
using namespace std;

float temp;
float fTemp;




int main()
{ 
    
    cout << "Enter the temperature in Celsius: " << endl;
    cin >> temp;
    fTemp = (static_cast<float>(9.0/5.0)*temp)+32;
    cout << "The temperature in Celsius is: " << temp << 
    " & the temperature in Farenheit is: " << fTemp << endl; 

return 0;
}

