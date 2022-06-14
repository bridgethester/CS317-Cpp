// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 1 Problem 8

// This program will calcualate information about Dr. Maxwell's
// weekly visit to Burrito Express and then display the following: 
// The subtotal, The tax rate, The tax amount, The pre-tip total, The percentage of tip, 
// The amount of the tip, & The total with tip

#include <iostream>	
using namespace std;

int main()

{
    float taxAmount;
    float subtotal;
    float tipPercentage;
    float tipAmount;
    float total;
    float preTipTotal;
    float taxRate;

    tipAmount = 20-17.71;
    preTipTotal = 17.71;
    total = 20;
    taxRate = .0975;
    tipPercentage = (tipAmount/preTipTotal)*100;
    taxAmount = preTipTotal*taxRate;
    subtotal = preTipTotal-taxAmount;

    cout << "                 "<<endl;
    cout << "The subtotal is: $" << subtotal <<endl;
    cout << "The tax rate is: " << taxRate <<endl;
    cout << "The tax amount is: $" << taxAmount <<endl;
    cout << "The total with tax is: $" << preTipTotal <<endl;
    cout << "The percentage of the tip is: " << tipPercentage <<endl;
    cout << "The tip amount is: $" << tipAmount <<endl;
    cout << "The total with tip is: $" << total <<endl;
    cout << "                       " <<endl;


    return 0;
}