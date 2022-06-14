// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Exam 1 Program 3

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    float maxCredit;
    float amountUsed;
    float avalCredit;

    cout << "" << endl;
    cout << "Please enter your credit limit: " << endl;
    cin >> maxCredit;
    
    if (maxCredit > 0 )
    {
        cout << "Enter the amount you have already spent: ";
        cin >> amountUsed;
    }
        else if (maxCredit < 0)
        {
            cout << "The number you have entered is invalid." << endl;
            cout << "Please rerun the program with valid amount." << endl;
            return 0;
        }
    

    if (amountUsed <= maxCredit)
    {
        avalCredit = (maxCredit - amountUsed);
        cout << fixed << showpoint << setprecision(2) << "Your available credit amount is: $" << avalCredit << endl;
    }

        else if (amountUsed > maxCredit)
        {
            cout << "You have entered an invalid number." << endl;
            cout << "Your spent amount must be greater than 0 and less than your credit limit." << endl;
            return 0;
        }


    return 0;

}