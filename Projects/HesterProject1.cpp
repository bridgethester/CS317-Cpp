// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Project 1

// This program will ask the user for their name, address, account number. 
// It will also display a menu for them to pick
// the type of phone service they use.
// It will ask questions based on their type of phone service.
// It will then display their bill back to them.  

#include <iostream>
#include <iomanip>
#include <cstdlib> 


using namespace std;

int main()
{ 
    const float regularService = 6.00, premiumService = 15.00;
    const float regServOver50 = 0.20, premServDayOver75 = 0.10, premServNightOver100 = 0.05;
    const char serviceCodeR = 'R', serviceCoder = 'r', serviceCodeP = 'P', serviceCodep = 'p';
    const string companyName = "\t\tGrime's Phone Company";
    const string companyAddress = "\t\tGlenn & Maggie Ln";
    const string companyState = "\t\tAtlanta, Georgia";
    const string companyPhone = "\t\tReach us at: 555-123-4567";
    const string companyQuote = "\t\tHave a great day!";
    char choice;
    string name;
    string address;
    int accountNumber;
    float numOfMinutes;
    float numOfMinutesDay;
    float numOfMinutesNight;
    float charge;
    float chargeDay;
    float chargeNight;
   

    cout << "" << endl;
    cout << "\tThank you for choosing Grime's Phone Company!" << endl;
    cout << "\tPress enter to start configuring your bill [Enter] " << endl;
    cin.get();
    cout << "\tPlease enter the name associated with your account: " << endl;
    getline(cin, name);
    cout << "\tPlease enter your billing address: " << endl;
    getline(cin, address);
    cout << "\tPlease enter account number: " << endl;
    cin >> accountNumber;


    cout << "" << endl;
    cout<<"\t Choose your service type:" << endl;
    cout<<"\t Enter 'R' or 'r' for regular service" << endl;
    cout<<"\t Enter 'P' or 'p' for premium service" << endl;
    cout << "" << endl;
    cin >> choice;

    switch(choice)
    {
        case serviceCodeR:
        case serviceCoder:
        cout << "\tYou chose Regular service." << endl;
        cout << "" << endl;
        cout << "\tPlease enter how many minutes you used: " << endl;
        cin >> numOfMinutes; 
            if (numOfMinutes <= 50)
                charge = regularService;
            else if (numOfMinutes > 50)
                charge = (regularService + ((numOfMinutes-50)*regServOver50));
        break;
        case serviceCodeP:
        case serviceCodep:
        cout << "\tYou chose Premium service." << endl;
        cout << "\tPlease enter how many minutes you used during the day: " << endl;
        cin >> numOfMinutesDay;
            if (numOfMinutesDay <= 75)
                chargeDay = premiumService;
                else if (numOfMinutesDay > 75)
                    chargeDay = premiumService + ((numOfMinutesDay-75)*premServDayOver75);
        cout << "" << endl;
        cout << "\tPlease enter how many minutes you used during the night: " <<endl;
        cin >> numOfMinutesNight;
            if (numOfMinutesNight <= 100)
                chargeNight = premiumService;
                else if (numOfMinutesNight > 100)
                    chargeNight = premiumService + ((numOfMinutesNight-100)*premServNightOver100);
        charge = ((chargeDay + chargeNight) - 15);
        numOfMinutes = (numOfMinutesDay + numOfMinutesNight) ;
        break;
        default:
        cout<< "\tThe valid options are 'R' or 'P'." <<endl;
        cout<< "Run the program again and select one of those." << endl;
        return 0;
        break;
    } 

    cout << "\tPress enter to view billing statement [Enter]" << endl;
    cin.ignore();
    cin.ignore();

    cout << "   --------------------------------------------------------" << endl;
    cout << setw(20) << "Name:" << setw(20) << "Address:" << endl;
    cout << setw(20) << name << setw(20) << address << setw(10) << endl;
    cout << "\t• The account number you entered is: " << accountNumber << endl;
    cout << "\t  -----------------------------------------" << endl;
        if (choice == 'R'||'r')
            cout << "\t• You are being billed for Regular Service. "  << endl;
            else if (choice == 'P'||'r')
            cout << "\t• You are being billed for Premium Service. " << endl;
    cout << "\t• The number of minutes you used this period: " << numOfMinutes  << endl;
    cout << fixed << showpoint << setprecision(2) << "\t• The amount due for your service is: $" << charge << endl;
    cout << "\t  -----------------------------------------" << endl;
    cout << companyName << endl;
    cout << companyAddress << endl;
    cout << companyState << endl;
    cout << companyPhone << endl;
    cout << companyQuote << endl;
    cout << "   --------------------------------------------------------" << endl;

    cout << "\t  Press enter to end program [Enter]" << endl;
    cin.ignore();

    return 0;
}
