// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// Bridget Hester

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	// int batAvg;
	float batAvg;
	batAvg = static_cast<float>(HITS)/AT_BAT;
	batAvg = (HITS / static_cast<float>(AT_BAT));	
	cout << "" << endl;							// an assignment statement 
	cout << "The batting average is " << batAvg << endl;	// output the result

	return 0;
}