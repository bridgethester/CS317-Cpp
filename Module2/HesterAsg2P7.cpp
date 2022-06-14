// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 2 Problem 7

// This program will display a receipt.

#include <iostream>	
#include <iomanip>
#include <cstdlib> 
using namespace std;

const float taxRate = .0948;
int table;
string date;
string server;
string meal;
string side;
const float mealPrice = 9.50;
const float sidePrice = 2.00;
float salesTax;
float total;
float grandTotal;
string mealSubtext;
int width;


int main()
{ 
    cout << "" << endl;
    cout << "Enter the table number: " << endl;
    cin >> table;
    cout << "Enter the name of the server: ";
    cin >> server;
    cout << "Enter the date: " << endl;
    cin >> date;
    srand(10);
    cout << setprecision(2) << fixed << showpoint;
    meal = "44 Ginger Lover";
    side = "Brown Rice";
    mealSubtext = "[Pork] [2**]";
    total = (mealPrice+sidePrice);
    salesTax = (total * taxRate);
    grandTotal = (total + salesTax);

    cout << "" << endl;
    cout << "    "<< "Ying Thai Kitchen" << endl;
    cout << "  " << "2220 Queen Anne AVE N" << endl;
    cout << "    " << "Seattle WA 98109" << endl;
    cout << "Tel. (206) 285-8424 Fax. (206) 285-8427" << endl;
    cout << "   " << "www.yingthaikitchen.com" << endl;
    cout << "Welcome to Ying Thai Kitchen Restaurant." << endl;
    cout << "" << endl;
    cout << "Order# " << rand() << setw(10) << "Table " << table << endl;
    cout << "Date: " << date << endl;
    cout << "Server: " << server << setw(10) << "(T.4)" << endl;
    cout << "-------------------------------" << endl;
    cout << meal << setw(8) << "$" << mealPrice << endl;
    cout << mealSubtext << endl;
    cout << side << setw(14) << "$" << sidePrice << endl;
    cout << "-------------------------------" << endl;
    cout << "Total 2 item(s)" << setw(7) << "$" << total << endl; 
    cout << "Sales Tax" << setw(14) << "$" << salesTax << endl;
    cout << "--------------------------------" << endl;
    cout << "--------------------------------" << endl; 
    cout << "Grand Total" << setw(10) << "$" << grandTotal << endl;
    cout << "Tip Guide" << endl;
    cout << "---------" << endl;
    cout << "15%=$1.89,  18%=$2.27,   20%=$2.52" << endl;
    cout <<   setw(12) << "    "   " Thank you very much. "  << endl;
    cout <<  setw(15)     << "    " "   Come back again   "  << endl;













    return 0;
 }