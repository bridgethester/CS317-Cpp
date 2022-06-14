// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 1 Problem 7

// This program will display three things:
// -The sum of the constants 62 and 99 
// -The product of 5.7 and 3.1
// -The sum of the characters ‘F’ and ‘a’  


#include <iostream>
using namespace std;

int main()
{
	int sum;
	float product;
    string charSum;
    const int numberOne = 62;
    const int numberTwo = 99;
    float numberThree = 5.7;
    float numberFour = 3.1;
    string charOne = "F";
    string charTwo = "a";

    sum = numberOne + numberTwo;
    product = numberThree*numberFour;
    charSum = charOne + charTwo;

    cout << "                       " << endl; 
	cout << "The sum of 62 & 99 is: " << sum << endl;
	cout << "The product of 5.7 & 3.1 is " << product << endl;
    cout << "The sum of characters F & a are: " << charSum << endl; 

	return 0;
}
