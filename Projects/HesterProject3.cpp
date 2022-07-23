// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Project 3

// This program will display a menu to the user and give them the choice
// of seeing movies and times or to exit the program.
// If they choose to see the movie menu:
// They will select the movie and time. The will then be able to enter the number
// of adult and/or children tickets they need. It will then display an empty seating chart.
// After picking their seats, the seating chart will be updated.
// After every ticket purchase, the program will display the total cost of that purchase
// and update the seating chart.
// If -99 is entered, then the totals are shown.

#include <iostream>
#include <iomanip>

using namespace std;

void menu();
void displayMovie();
void displaySeats();
void purchaseSeats();
int printTickets();
int movieTime();
int movieName();
void markSeats(int row, int chair);

int menuChoice;
int movieChoice;
int prevMovieChoice;
int timeChoice;
string movie;
int seatChoice;
int seatChoice2;
int adultTickets = 0;
int childTickets = 0;
float totalCost1 = 0;
float totalCost2 = 0;
float overallTotal = 0;
int seat[7][8] = {0};

int main()
{
    do
    {
        prevMovieChoice = movieChoice;
        menu();

        if (menuChoice == 1)
        {
            displayMovie();
        }
        else if (menuChoice == 2)
        {
            cout << "Have a great day! :)" << endl;
            return 0;
        }
        else if (menuChoice != 1 && menuChoice != 2)
        {
            cout << "Invalid response. Please enter 1 or 2: ";
            menu();
        }

        cout << "Now lets choose your seats: " << endl;
        cout << "" << endl;

        if (movieChoice == -99)
        {
            printTickets();
            break;
        }
        cout << "Available Seats: " << endl
             << endl;
        displaySeats();
        // ask for seat count here
        cout << "How many adult tickets would you like to purchase? (1-4): ";
        cin >> adultTickets;

        if (adultTickets != 1 && adultTickets != 2 && adultTickets != 3 && adultTickets != 4)
        {
            cout << "Not a valid option. Please choose a number 1-4 for adult tickets. " << endl;
            cin >> adultTickets;
        }
        for (int i = 0; i < adultTickets; i++)
        {
            purchaseSeats();
        }
        cout << "How many child tickets would you like to purchase? (1-4): ";
        cin >> childTickets;
        if (childTickets != 1 && childTickets != 2 && childTickets != 3 && childTickets != 4)
        {
            cout << "Not a valid option. Please choose a number 1-4 for child tickets. " << endl;
            cin >> childTickets;
        }
        if (timeChoice == 1)
        {

            totalCost1 = totalCost1 + (adultTickets * 6.00);
            totalCost2 = totalCost2 + (childTickets * 4.00);
        }
        else if (timeChoice == 2)
        {
            totalCost1 = totalCost1 + (adultTickets * 8.00);
            totalCost2 = totalCost2 + (childTickets * 6.00);
        }
        overallTotal = totalCost1 + totalCost2;

        for (int i = 0; i < childTickets; i++)
        {
            purchaseSeats();
        }
        if (movieChoice != -99 && movieChoice == 1 || movieChoice == 2)
        {
            continue;
        }
    } while (menuChoice != -99);
}

void menu()
{

    cout << "" << endl;
    cout << " Welcome to C++ Movie Theatre! " << endl
         << endl;
    cout << " What would you like to do? " << endl
         << endl;
    cout << "......................................" << endl
         << endl;
    cout << " 1. Display movie times and prices. " << endl
         << endl;
    cout << " 2. Quit the program. " << endl
         << endl;
    cout << endl;

    cin >> menuChoice;
}

void displayMovie() // come back and setprecision this
{

    cout << "   Movie Title                       Show Times    Prices" << endl;
    cout << "..............................................................." << endl;
    cout << "   Free Birds                         3:30 pm       $6.00" << endl;
    cout << "   Free Birds                         6:00 pm       $8.00" << endl;
    cout << "   Beethoven                          5:30 pm       $6.00" << endl;
    cout << "   Beethoven                          7:30 pm       $8.00" << endl;
    cout << "" << endl;
    movieName();
    if (movieChoice != -99)
        movieTime();
}

int movieName()
{
    cout << "Enter '1' for Free Birds" << endl;
    cout << "Enter '2' for Beethoven" << endl;
    cin >> movieChoice;
    if (movieChoice != 1 && movieChoice != 2 && movieChoice != -99)
    {
        cout << "This is an invalid choice. Please enter '1' or '2': ";
        cin >> movieChoice;
    }
    return movieChoice;
}
int movieTime()
{
    cout << "Enter '1' for the matinee" << endl;
    cout << "Enter '2' for the evening showing" << endl;
    cin >> timeChoice;
    if (timeChoice != 1 && timeChoice != 2)
    {
        cout << "This is an invalid choice. Please enter '1' or '2': ";
        cin >> timeChoice;
    }
    return timeChoice;
}
void displaySeats()
{

    // int seat[7][8] = {0};

    cout << "Seats 1  2  3  4  5  6  7  8" << endl;
    cout << "Row 1  " << seat[0][0] << "  " << seat[0][1] << "  " << seat[0][2] << "  " << seat[0][3] << "  " << seat[0][4] << "  " << seat[0][5] << "  " << seat[0][6] << "  " << seat[0][7] << endl;
    cout << "Row 2  " << seat[1][0] << "  " << seat[1][1] << "  " << seat[1][2] << "  " << seat[1][3] << "  " << seat[1][4] << "  " << seat[1][5] << "  " << seat[1][6] << "  " << seat[1][7] << endl;
    cout << "Row 3  " << seat[2][0] << "  " << seat[2][1] << "  " << seat[2][2] << "  " << seat[2][3] << "  " << seat[2][4] << "  " << seat[2][5] << "  " << seat[2][6] << "  " << seat[2][7] << endl;
    cout << "Row 4  " << seat[3][0] << "  " << seat[3][1] << "  " << seat[3][2] << "  " << seat[3][3] << "  " << seat[3][4] << "  " << seat[3][5] << "  " << seat[3][6] << "  " << seat[3][7] << endl;
    cout << "Row 5  " << seat[4][0] << "  " << seat[4][1] << "  " << seat[4][2] << "  " << seat[4][3] << "  " << seat[4][4] << "  " << seat[4][5] << "  " << seat[4][6] << "  " << seat[4][7] << endl;
    cout << "Row 6  " << seat[5][0] << "  " << seat[5][1] << "  " << seat[5][2] << "  " << seat[5][3] << "  " << seat[5][4] << "  " << seat[5][5] << "  " << seat[5][6] << "  " << seat[5][7] << endl;
    cout << "Row 7  " << seat[6][0] << "  " << seat[6][1] << "  " << seat[6][2] << "  " << seat[6][3] << "  " << seat[6][4] << "  " << seat[6][5] << "  " << seat[6][6] << "  " << seat[6][7] << endl;
    cout << endl;
}

void purchaseSeats()
{

    int seat[7][8] = {0};

    cout << "What seat would you like to purchase? (1-7 for row, 1-8 for seat number): " << endl;
    cout << "Enter row first: ";
    cin >> seatChoice;
    cout << "" << endl;

    if (seatChoice != 1 && seatChoice != 2 && seatChoice != 3 && seatChoice != 4 && seatChoice != 5 && seatChoice != 6 && seatChoice != 7)
    {
        cout << "Not a valid option. Please choose a number 1-7 for row. " << endl;
        cin >> seatChoice;
    }
    else
    {
        cout << "What seat would you like to purchase? (1-7 for row, 1-8 for seat number): " << endl;
        cout << "Now enter seat number: ";
        cin >> seatChoice2;
        cout << "" << endl;

        if (seatChoice2 != 1 && seatChoice2 != 2 && seatChoice2 != 3 && seatChoice2 != 4 && seatChoice2 != 5 && seatChoice2 != 6 && seatChoice2 != 7 & seatChoice2 != 8)
        {
            cout << "Not a valid option. Please choose a number 1-8 for seat number. " << endl;
            cin >> seatChoice2;
        }
        else
        {
            if (seat[seatChoice - 1][seatChoice2 - 1] == 1 || seat[seatChoice - 1][seatChoice2 - 1] == 2)
            {
                cout << "That seat has already been purchased. Please choose another seat. " << endl;

                displaySeats();
                purchaseSeats();
            }
            else
            {
                markSeats(seatChoice - 1, seatChoice2 - 1);

                cout << "Updated seating chart: " << endl
                     << endl;
                cout << "'1' stands for taken" << endl;
                cout << "'2' stands for not available - COVID safety" << endl
                     << endl;
                displaySeats();
            }
        }
    }
}

void markSeats(int row, int chair)
{

    seat[row][chair] = 1;
    if (row > 0)
        seat[row - 1][chair] = 2;
    if (7 > row + 1)
        seat[row + 1][chair] = 2;
    if (chair > 0)
        seat[row][chair - 1] = 2;
    if (8 > chair + 1)
        seat[row][chair + 1] = 2;
}

int printTickets()
{
    int choice;

    cout << "You have entered '-99' to enter admin area." << endl
         << endl;
    cout << "Movie: ";
    if (prevMovieChoice == 1)
    {
        cout << "Free Birds" << endl;
    }
    else if (prevMovieChoice == 2)
    {
        cout << "Beethoven" << endl;
    }

    cout << "Seat: "
         << "Row: " << seatChoice << " Seat: " << seatChoice2 << endl
         << endl;

    cout << "Adult Tickets: " << adultTickets << endl;
    cout << "Child Tickets: " << childTickets << endl;
    cout << "Total Cost: $" << overallTotal << endl
         << endl;

    cout << "Have a great day! :)" << endl
         << endl;
    cout << "To return to menu enter '1'" << endl;
    cout << "To exit program enter '2'" << endl
         << endl;

    cin >> choice;

    if (choice == 1)
    {
        main();
    }
    else if (choice == 2)
    {
        return 0;
    }
    else
    {
        cout << "This is an invalid response. Please enter '1' or '2': ";
        cin >> choice;
    }
    return 0;
}
