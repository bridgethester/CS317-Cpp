// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Bridget Hester

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	
	if (average > 100)
	{cout << "That is an invalid entry." <<endl;
	return 0;
	}
	if (average >= 90)
	{cout << "You earned an A"<< endl;
	}
	else if (average>=60)
	{cout<<"You Pass" << endl;
	}
	else 
	{
		cout <<"You fail"<< endl;
	}

	
return 0;
}