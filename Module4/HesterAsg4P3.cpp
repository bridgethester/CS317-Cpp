// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 4 Problem 3

// This program will ask the user for a positive integer value.
// The program will then use a loop to get the sum of all even integers from 2 up to the number entered.

#include <iostream>
using namespace std;



int main()
{
    int inputNum;

    cout << "Please enter a positive integer: " << endl;
    cin >> inputNum;

    if (inputNum <= 0)
    {
    cout << "Invalid input. Please enter a postive number:"; cin >> inputNum;
    
    };

    int sum = 0;

    for (int count = 0; count < inputNum && inputNum > 0 ; count = count + 2)
    {
        sum = sum + count;
    }
    cout << "The sum of all even numbers is: " << sum << endl;





    return 0;
}