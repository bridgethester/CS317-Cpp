// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Bridget Hester

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased 
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.
	string item;       // name of item 

	cout << setprecision(4) << fixed << showpoint;//formatted output

	cout << "Please input the name of the item bought" << endl;
	//cin >> item;
	getline(cin,item);
	cout << "Please input the number of items bought" << endl;
	cin >> quantity;
	cout << "Please enter the price of the items purchased" << endl;
	cin >> itemPrice;
	totalBill = itemPrice*quantity;
	cout << "The item you bought is " << item << endl;
	cout << "The total bill is $" << totalBill << endl;



	return 0;
}