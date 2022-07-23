// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

// Bridget Hester

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.

void writeProverb(string wordCode)
{

	cout << "Now is the time for all good men to come to the aid of their " << wordCode << endl;

	// Fill in the body of the function to accomplish what is described above
	/* if (wordCode == 1)
	{
		cout <<  "Now is the time for all good men to come to the aid of their party" << endl;
	}
	else if (wordCode == 2)
	{
		cout <<  "Now is the time for all good men to come to the aid of their country" << endl;

	}
	else 
	{
		cout << "Sorry, input is invalid. Please enter a 1 or 2: " << endl;
		cin >> wordCode;
	*/

	
} 

int main()
{
	string wordCode;

	cout << "Given the phrase: Now is the time for all good men to come to the aid of their ______ " << endl;
    cout << "Please input the word you would like to have finish the proverb: " << endl;
	cin >> wordCode; 
	cout << endl;

	writeProverb(wordCode);

	return 0;
}

//	******************************************************************************
//	writeProverb
//
//	task:	  This function prints a proverb. The function takes a number
//	          from the call. If that number is a 1 it prints "Now is the time
//	          for all good men to come to the aid of their party."
//	          Otherwise, it prints "Now is the time for all good men
//	          to come to the aid of their country."
//	data in:  code for ending word of proverb (integer)
//	data out: no actual parameter altered
//
//	*****************************************************************************

