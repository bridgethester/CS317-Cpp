// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 2 Problem 2

// This program will calculates a theater’s gross and net box office profit for a night.
// It will also take in from the user: the name of the movie, and how many adult & child tickets were sold. 


#include <iostream>
#include <iomanip>	
using namespace std;

const float adultTicketPrice = 9.00;
const float childTicketPrice = 6.00;
string movieName;
int adultTicketSold;
int childTicketSold;
float grossBoxOffice;
float netBoxOffice;
float distributorPaid;



int main()
{   cout << "" << endl;
    cout << "Enter the name of the movie: " << endl;
    getline(cin,movieName);
    cout << "Enter the amount of Adult tickets sold: " << endl;
    cin >> adultTicketSold;
    cout << "Enter the amount of Child tickets sold: " << endl;
    cin >> childTicketSold;

    grossBoxOffice = (adultTicketSold*adultTicketPrice) + (childTicketSold*childTicketPrice);
    netBoxOffice = grossBoxOffice*.20;
    distributorPaid = grossBoxOffice - netBoxOffice;

    cout << "Movie Name:" << setw(24) << movieName << endl;
    cout << "Adult Tickets Sold: " << setw(12) << adultTicketSold << setw(3) << endl;;
    cout << "Child Tickets Sold: " << setw(12) << childTicketSold << setw(3) << endl;
    cout << setprecision(2) << fixed << showpoint; 
    cout << "Gross Box Office Profit: " << setw(4) << "$"  << grossBoxOffice << endl;
    cout << "Net Box Office Profit: " << setw(6) << "$" << netBoxOffice << endl;
    cout << "Amount Paid to Distributor: " << setw(1) << "$" << distributorPaid << endl;


return 0;
}