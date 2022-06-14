// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 2 Problem 8

// This program will estimate how many kilos the entered amount of
// pounds corresponds to. 
// & calculate the exam number of kilos that the pounds correspond to.

#include <iostream>
using namespace std;

const float fractionTop = 1;
const float fractionBottom = 10;
const float denominator = 2;
float pounds;
float kilos;
float kiloEstimate;


int main()
{
    cout << "Enter the pounds: " << endl;
    cin >> pounds; 
    kiloEstimate = (pounds/denominator)- ((pounds/denominator) * (fractionTop/fractionBottom));
    kilos = pounds/2.2046;
    cout << " " << endl;
    cout << pounds << " pounds = " << kiloEstimate << " estimate " << kilos << " exact" << endl;

    
    
    

    
    return 0; }