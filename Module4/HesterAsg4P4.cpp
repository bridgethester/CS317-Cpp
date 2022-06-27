// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 4 Problem 4

// This program will provide the user with a menu of three different grocery stores: Wal-Mart, Hometown Market, and Sam’s Club,
// and a done option. Then the user will enter five grocery items, and can enter items for each grocery store if desired. 
// Once they select done, the program will display the name of the stores and the items in alphabetical order. 
// It will also create an output file that will provide the same listing. 

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;


int main()
{   
    char store;
    bool validStore;
    ofstream dataOut;
    string item1, item2, item3, item4, item5, item6, item7, item8, item9, item10, item11, item12, item13, item14, item15;
    dataOut.open("grocerylist.txt");

    do
	{
		cout << endl << endl;
		cout << "Select a Grocery Store:" << endl << endl;
		cout << "A: Walmart" << endl;
		cout << "B: Hometown Market" << endl;
		cout << "C: Sam's Club" << endl;

		cout << "Enter A, B, or C to choose a store" << endl;
		cout << "Enter D to be done." << endl << endl;

        cin >> store;
		switch (store)
		{
			case 'a':
			case 'A':
			case 'b':
			case 'B':
			case 'c':
			case 'C': validStore = true;
				break;
			default: validStore = false;

		}

        if (validStore == true)
        
        switch(store)
        {
			case 'a':
			case 'A':
                cout << "Enter 5 grocery items" << endl; 
				cin >> item1;
                cin >> item2;
                cin >> item3;
                cin >> item4;
                cin >> item5;
				break;
			case 'b':
			case 'B': 
                cout << "Enter 5 grocery items" << endl;
                cin >> item6;
                cin >> item7;
                cin >> item8;
                cin >> item9;
                cin >> item10;
				break;

			case 'c':
			case 'C':
                cout << "Enter 5 grocery items" << endl;
                cin >> item11;
                cin >> item12;
                cin >> item13;
                cin >> item14;
                cin >> item15;
				break;

            case 'd':
			case 'D': 
                // cout <<  << endl;
				break;
			
			default: cout << "You have entered an invalid response."<<endl;
					cout << " Try again please" << endl;
		}
		
		}
     

    while(store!='d' && store!='D');

    //cout store 1 purchases
    if(item1 != ""){
        cout << "" << endl;
        cout << "The items you bought at Walmart are: " << endl;
        cout << item1 << endl;
        cout << item2 << endl;
        cout << item3 << endl;
        cout << item4 << endl;
        cout << item5 << endl;

    }
    //cout store 2 purchases
    if(item6 != ""){
        cout << "" << endl;
        cout << "The items you bought at Hometown Market are: " << endl;
        cout << item6 << endl;
        cout << item7 << endl;
        cout << item8 << endl;
        cout << item9 << endl;
        cout << item10 << endl;

    }
    //cout store 3 purchases
    if(item11 != ""){
        cout << "" << endl;
        cout << "The items you bought at Sam's Club are: " << endl;
        cout << item11 << endl;
        cout << item12 << endl;
        cout << item13 << endl;
        cout << item14 << endl;
        cout << item15 << endl;


    }

        
    if(item1 != ""){
        dataOut << "" << endl;
        dataOut << "The items you bought at Walmart are: " << endl;
        dataOut << item1 << endl;
        dataOut << item2 << endl;
        dataOut << item3 << endl;
        dataOut << item4 << endl;
        dataOut << item5 << endl;

    }
    
    if(item6 != ""){
        dataOut << "" << endl;
        dataOut << "The items you bought at Hometown Market are: " << endl;
        dataOut << item6 << endl;
        dataOut << item7 << endl;
        dataOut << item8 << endl;
        dataOut << item9 << endl;
        dataOut << item10 << endl;

    }
    if(item11 != ""){
        dataOut << "" << endl;
        dataOut << "The items you bought at Sam's Club are: " << endl;
        dataOut << item11 << endl;
        dataOut << item12 << endl;
        dataOut << item13 << endl;
        dataOut << item14 << endl;
        dataOut << item15 << endl;


    
    }
     
    return 0;
    
}