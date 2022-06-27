// Bridget Hester

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	do
	{
		cout << "Please enter any letter other than 'x' " << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
	}while (letter != 'x');

	return 0;
}