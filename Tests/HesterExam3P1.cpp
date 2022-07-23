// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Exam 3 Program 1

#include <iostream>
#include <fstream>
using namespace std;

void Salesman(int index);
void NumSales(int index);
void PrtRpt();

float totalSales[6];
float numOfSales[6];

int main()
{
    for (int count = 1; count < 6; count++)
    {
        Salesman(count);
        NumSales(count);
    }
    PrtRpt();
}

void Salesman(int index)
{
    cout << "Please enter the total of all sales for salesman " << index << ": ";
    cin >> totalSales[index];
    cout << "" << endl;
}

void NumSales(int index)
{
    cout << "Please enter the number of sales for salesman " << index << ": ";
    cin >> numOfSales[index];
    cout << "" << endl;
}

void PrtRpt()
{
    ofstream dataOut;
    dataOut.open("Report.txt");

    for (int count = 1; count < 6; count++)
    {
        dataOut << "Salesman " << count << " had " << totalSales[count] << " total sales and the average was " << totalSales[count] / numOfSales[count] << endl;
    }
    dataOut.close();
}
