// This program will output the circumference and area
// of the circle with a given radius.

// Bridget Hester

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	float area;							// definition of area of circle 
	int circumference;				// definition of circumference 
	circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * RADIUS * RADIUS;							// computes area

	cout << "The circumference of the circle is " << circumference << endl; // outputs the cirumference 
	cout << "The area of the circle is " << area << endl; // outputs the area
 

	return 0;
}