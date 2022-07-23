// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Project 2

// This program will produce a game, or so, of Blackjack between the player and the dealer.
// It will display a menu of options and as long as the player doesn't select quit,
// Blackjack will continue to be played.
// Once quit is selected, the player can see their remaining balance and the program will end.

#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
using namespace std;

char displayMenufunction();
float betfunction(char choice);
void validationfunction(float bet, float credit);
int hitFunction();
string cardValuefunction(int cardVal);
void stayfunction();
int getCardPoints(int cardVal);
int blackjackWinLosefunction(int cardVal1, int cardVal2, int cardVal3, int cardVal4, int cardVal5, int dealerCardVar1, int dealerCardVar2, int dealerCardVar3);
void quitfunction(char choice, float credit);
void displayHistoryfunction();
void writeHistoryfunction(string cardFace1, string cardFace2, string cardFace3, string cardFace4, string cardFace5, float bet, string dealerCardFace1, string dealerCardFace2, string dealerCardFace3, int result, float credit);

int main()
{
    srand(time(0));
    char choice;
    float credit = -1;
    float bet;
    int cardVal1;
    string cardFace1;
    int cardVal2;
    string cardFace2;
    int cardVal3;
    string cardFace3;
    int cardVal4;
    string cardFace4;
    int cardVal5;
    string cardFace5;
    int dealerCardVal1;
    string dealerCardFace1;
    int dealerCardVal2;
    string dealerCardFace2;
    int dealerCardVal3;
    string dealerCardFace3;
    int blackjackChoice;
    choice = displayMenufunction();

    while (choice != '3')
    {
        cardFace1 = "";
        cardFace2 = "";
        cardFace3 = "";
        cardFace4 = "";
        cardFace5 = "";
        dealerCardFace1 = "";
        dealerCardFace2 = "";
        dealerCardFace3 = "";
        cardVal1 = 0;
        cardVal2 = 0;
        cardVal3 = 0;
        cardVal4 = 0;
        cardVal5 = 0;
        dealerCardVal1 = 0;
        dealerCardVal2 = 0;
        dealerCardVal3 = 0;

        if (choice == '2')
        {
            displayHistoryfunction();
        }
        else
        {
            if (credit == -1)
            {
                cout << "How much money do you have in available credit?: " << endl;
                cin >> credit;
            }
            bet = betfunction(choice);
            validationfunction(bet, credit);
            cardVal1 = hitFunction();
            cardFace1 = cardValuefunction(cardVal1);
            cout << "You recieved a " << cardFace1 << endl;
            dealerCardVal1 = hitFunction();
            dealerCardFace1 = cardValuefunction(dealerCardVal1);
            cout << "The dealer recieved a face down card. " << endl;
            cardVal2 = hitFunction();
            cardFace2 = cardValuefunction(cardVal2);
            cout << "You recieved a " << cardFace2 << endl;
            dealerCardVal2 = hitFunction();
            dealerCardFace2 = cardValuefunction(dealerCardVal2);
            cout << "The dealer recieved a " << dealerCardFace2 << endl;
            cout << "\t\t** Choose whether to hit or stay **\n\n"
                 << "\t\t1. hit\n "
                 << "\t\t2. stay\n "
                 << "Enter your choice:  ";
            cin >> blackjackChoice;
            if (blackjackChoice == 1)
            {
                cardVal3 = hitFunction();
                cardFace3 = cardValuefunction(cardVal3);
                cout << "Your third card is a " << cardFace3 << endl;
                bool bust = false;
                int handPoints = (getCardPoints(cardVal1) + getCardPoints(cardVal2) + getCardPoints(cardVal3));
                if (handPoints > 21)
                    bust = true;
                if (bust == false)
                {
                    cout << "\t\t** Choose whether to hit or stay **\n\n";
                    cout << "\t\t1. hit\n ";
                    cout << "\t\t2. stay\n ";
                    cout << "Enter your choice:  ";
                    cin >> blackjackChoice;
                }
                if (blackjackChoice == 1 && bust == false)
                {
                    cardVal4 = hitFunction();
                    cardFace4 = cardValuefunction(cardVal4);
                    cout << "Your fourth card is a " << cardFace4 << endl;
                    handPoints = (getCardPoints(cardVal1) + getCardPoints(cardVal2) + getCardPoints(cardVal3) + getCardPoints(cardVal4));
                    if (handPoints > 21)
                        bust = true;
                    if (bust == false)
                    {
                        cout << "\t\t** Choose whether to hit or stay **\n\n";
                        cout << "\t\t1. hit\n " << endl;
                        cout << "\t\t2. stay\n " << endl;
                        cout << "Enter your choice:  " << endl;
                        cin >> blackjackChoice;
                    }
                    if (blackjackChoice == 1 && bust == false)
                    {
                        cardVal5 = hitFunction();
                        cardFace5 = cardValuefunction(cardVal5);
                        cout << "Your fifth card is a " << cardFace5 << endl;
                    }
                }
            }
            else if (blackjackChoice == 2)
            {
                stayfunction();
            }
            while (blackjackChoice != 1 && blackjackChoice != 2)
            {
                cout << "Invalid option. Please enter a '1' or '2' : ";
                cin >> blackjackChoice;
            }

            if (getCardPoints(dealerCardVal1) + getCardPoints(dealerCardVal1) < 17)
            {
                dealerCardVal3 = hitFunction();
                dealerCardFace3 = cardValuefunction(dealerCardVal3);
                cout << "Dealer drew a " << dealerCardFace3 << endl;
            }

            int result = blackjackWinLosefunction(cardVal1, cardVal2, cardVal3, cardVal4, cardVal5, dealerCardVal1, dealerCardVal2, dealerCardVal3);
            if (result == 1)
            {
                credit = credit + bet;
            }
            else if (result == 0)
            {
                credit = credit - bet;
            }
            writeHistoryfunction(cardFace1, cardFace2, cardFace3, cardFace4, cardFace5, bet, dealerCardFace1, dealerCardFace2, dealerCardFace3, result, credit);
        }
        choice = displayMenufunction();
    }
    quitfunction(choice, credit);
    return 0;
}

int getCardPoints(int cardVal)
{
    int points = 0;
    switch (cardVal)
    {
    case 1:
        points = 2;
        break;
    case 2:
        points = 3;
        break;
    case 3:
        points = 4;
        break;
    case 4:
        points = 5;
        break;
    case 5:
        points = 6;
        break;
    case 6:
        points = 7;
        break;
    case 7:
        points = 8;
        break;
    case 8:
        points = 9;
        break;
    case 9:
        points = 10;
        break;
    case 10:
        points = 10;
        break;
    case 11:
        points = 10;
        break;
    case 12:
        points = 10;
        break;
    case 13:
        points = 11;
        break;
    }
    return points;
}

char displayMenufunction()
{
    char choice;
    cout << "\t\t** Welcome to CPP Casino **\n\n"
         << "\t\t1. Play Blackjack\n "
         << "\t\t2. See game history\n "
         << "\t\t3. Quit\n "
         << "Enter your choice:  ";
    cin >> choice;
    return choice;
}

float betfunction(char choice)
{
    float bet;
    if (choice == '1')
    {
        cout << "How much money do you want to bet for this game?: " << endl;
        cin >> bet;
    }
    return bet;
}
void validationfunction(float bet, float credit)
{
    if (bet < 10 || bet > 150)
    {
        cout << "Please enter a bet between $10 and $150: ";
        cin >> bet;
    }
    if (bet > credit)
    {
        cout << "Please enter a valid bet. This amount exceeds your available credit.";
        cin >> bet;
    }
}
int hitFunction()
{
    int cardVal = 0;
    cardVal = rand() % 13 + 1;

    return cardVal;
}

string cardValuefunction(int cardVal)
{
    string cardFace = "";
    switch (cardVal)
    {
    case 1:
        cardFace = "2";
        break;
    case 2:
        cardFace = "3";
        break;
    case 3:
        cardFace = "4";
        break;
    case 4:
        cardFace = "5";
        break;
    case 5:
        cardFace = "6";
        break;
    case 6:
        cardFace = "7";
        break;
    case 7:
        cardFace = "8";
        break;
    case 8:
        cardFace = "9";
        break;
    case 9:
        cardFace = "10";
        break;
    case 10:
        cardFace = "J";
        break;
    case 11:
        cardFace = "Q";
        break;
    case 12:
        cardFace = "K";
        break;
    case 13:
        cardFace = "A";
        break;
    }
    return cardFace;
}

int blackjackWinLosefunction(int cardVal1, int cardVal2, int cardVal3, int cardVal4, int cardVal5, int dealerCardVar1, int dealerCardVar2, int dealerCardVar3)
{
    cout << "Dealers first card was a " << cardValuefunction(dealerCardVar1) << endl;
    int playerPoints = getCardPoints(cardVal1) + getCardPoints(cardVal2) + getCardPoints(cardVal3) + getCardPoints(cardVal4) + getCardPoints(cardVal5);
    int dealerPoints = getCardPoints(dealerCardVar1) + getCardPoints(dealerCardVar2) + getCardPoints(dealerCardVar3);
    if (playerPoints > 21 && dealerPoints > 21)
    {
        cout << "Player and Dealer Bust. Its a draw." << endl;
        return 2;
    }
    else if (playerPoints > 21)
    {
        cout << "Player busts. Dealer Wins." << endl;
        return 0;
    }
    else if (dealerPoints > 21)
    {
        cout << "Dealer busts, Player Wins." << endl;
        return 1;
    }
    if (playerPoints > dealerPoints)
    {
        cout << "Congrats, you win!!" << endl;
        return 1;
    }
    else
    {
        cout << "Dealer wins. You lose." << endl;
        return 0;
    }
}
void stayfunction()
{
    cout << "Now the dealer will consider a draw." << endl;
}
void quitfunction(char choice, float credit)
{
    if (choice == '3')
    {
        cout << "Thank you for playing!" << endl;
        cout << "Remaining Credit Balance: " << credit << endl;
    }
}
void writeHistoryfunction(string cardFace1, string cardFace2, string cardFace3, string cardFace4, string cardFace5, float bet, string dealerCardFace1, string dealerCardFace2, string dealerCardFace3, int result, float credit)
{
    ofstream dataOut;
    dataOut.open("HesterHistory.txt", ios::out | ios::app); // found this in the book on how to stop files from overwriting!:)
    dataOut << "Hand: " << cardFace1 << " | " << cardFace2 << " | ";
    if (cardFace3 != "")
    {
        dataOut << cardFace3 << " | ";
    }
    if (cardFace4 != "")
    {
        dataOut << cardFace4 << " | ";
    }
    if (cardFace5 != "")
    {
        dataOut << cardFace5 << " | ";
    }
    dataOut << "Bet: " << bet << " | "
            << " Dealer Hand: " << dealerCardFace1 << " | " << dealerCardFace2 << " | ";
    if (dealerCardFace3 != "")
    {
        dataOut << dealerCardFace3 << " | ";
    }
    if (result == 0)
    {
        dataOut << "Loss"
                << " | ";
    }
    if (result == 1)
    {
        dataOut << "Win"
                << " | ";
    }
    if (result == 2)
    {
        dataOut << "Draw"
                << " | ";
    }
    dataOut << "Balance: " << credit << endl;
    dataOut.close();
    return;
}
void displayHistoryfunction()
{
    ifstream dataIn;

    dataIn.open("HesterHistory.txt");

    char input;
    while (dataIn)
    {
        dataIn.get(input);
        cout << (input);
    }
    dataIn.close();
}
