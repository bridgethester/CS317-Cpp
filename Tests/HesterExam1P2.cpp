// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Exam 1 Program 2

#include <iostream>
using namespace std;


int main()
{
    int inputDays;
    int years;
    int days;

    cout << "" << endl;
    cout << "Please enter the number of days you want to convert to years: " << endl;
    cin >> inputDays;

    if (inputDays < 365 && inputDays >= 1)
    {
        cout << "A year consists of 365 days." << endl;
        cout << "You have not entered enough days to determine years." << endl; 
        return 0;
    }
    

        else if (inputDays <= 0 ) 
        {
        cout << "You have entered and invalid number." << endl;
        cout << "Please re-run the program with a positive number." << endl; 
        return 0; 
        }

        else if (inputDays >= 365)
        {
        years = inputDays/365;
        days = inputDays%365;
        }

            if (days == 0)
            {
            cout << "There are " <<years<< " years in " <<inputDays<< " days. " << endl; 
            }
            else
            {
            cout << "There are " <<years<< " years and " <<days<< " days in " <<inputDays<< " days. " << endl;
            }
    



    return 0;

}