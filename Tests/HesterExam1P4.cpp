// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Exam 1 Program 4

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

    const int num9 = 9, num5 = 5, num32 = 32;
    float fTemp;
    int cTemp;

    cout << "Please enter the temperature in Celcius: ";
    cin >> cTemp;
    if (cTemp > 100 )
    {
        cout << "You entered an invalid number." << endl;
        cout << "Re-run the program and enter a value between -50 & 100." << endl;
        return 0;
    }
        else if (cTemp < -50)
        {
        cout << "You entered an invalid number." << endl;
        cout << "Re-run the program and enter a value between -50 & 100." << endl;
        return 0;
        }
    
        else 
        fTemp = static_cast<float>((num9/num5)*cTemp)+num32;
        cout << "Celcius" << setw(10) << "Farenheit" << endl;
        cout << cTemp << setw(10) << fixed << showpoint << setprecision(2) << fTemp << endl;





    
    return 0;

}