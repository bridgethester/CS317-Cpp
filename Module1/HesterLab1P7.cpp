// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Lab 1.7 

// This program will output the perimeter and area 
// of a rectangle with given length and width. 

#include <iostream>
using namespace std;

const double length = 8;
const double width = 3;

int main()
{
	float area;							// definition of area 
	float perimeter; 				    // definition of perimeter
	perimeter = 2 * (length + width);	// computes perimeter
	area = length * width ;             // computes area

	cout << "The perimeter of the rectangle is " << perimeter << endl; // outputs the perimeter 
	cout << "The area of the rectangle is " << area << endl; // outputs the area
 

	return 0;
}