// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Exam 3 Program 2

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

char board[6][7] = {'-'};
char compColor, userColor;
int turn;

void playerTurn();
void computerTurn();
void dropChipInColumn(char color, int column);
void drawBoard();
void fillBoard();

int main()
{
    fillBoard();
    srand(time(NULL));
    int userDie = 0, compDie = 0;
    while (compDie == userDie)
    {
        userDie = rand() % 6 + 1;
        compDie = rand() % 6 + 1;
        cout << "User rolled: " << userDie << endl;
        cout << "Computer rolled: " << compDie << endl;
    }
    if (userDie > compDie)
    {
        char chipColor;
        cout << "Select color: (R/Y) ";
        cin >> chipColor;
        cout << " " << endl;
        if (chipColor == 'R' || chipColor == 'r')
        {

            userColor = 'R';
            compColor = 'Y';
            cout << "The user color is Red and Computer color is Yellow." << endl;
        }
        else // come back & validate
        {
            userColor = 'Y';
            compColor = 'R';
            cout << "The user color is Yellow and Computer color is Red." << endl;
        }
    }
    else
    {
        userColor = 'Y';
        compColor = 'R';
        cout << "The user color is Yellow and Computer color is Red." << endl;
        turn = 1;
    }
    bool playing = true;
    while (playing)
    {
        drawBoard();

        if (turn == 0)
        {
            cout << "It is the player's turn." << endl;
            playerTurn();
            turn = 1;
        }

        else
        {
            cout << "It is the computer's turn." << endl;
            computerTurn();
            turn = 0;
        }
    }
}

void fillBoard()
{
    for (int column = 0; column < 6; column++)
    {
        for (int row = 0; row < 7; row++)
        {
            board[column][row] = '-';
        }
    }
}

void playerTurn()
{
    int playerChoice = -1;
    bool columnFull = false;
    while ((playerChoice < 1 || playerChoice > 6) || columnFull == true)
    {
        cout << "Enter column choice: ";
        cin >> playerChoice;
        cout << "" << endl;
        if (playerChoice < 1 || playerChoice > 6)
        {
            cout << "Not valid choice" << endl;
        }
        else if (board[playerChoice][6] != '-')
        {
            columnFull = true;
            cout << "Column Full" << endl;
        }
        else
        {
            columnFull = false;
        }
    }
    dropChipInColumn(userColor, playerChoice - 1);
    cout << "Player dropped in column: " << playerChoice << endl;
}

void computerTurn()
{
    int compChoice = -1;
    bool columnFull = false;
    while ((compChoice < 0 || compChoice > 5) || columnFull == true)
    {
        compChoice = rand() % 6;
        cout << "" << endl;
        if (board[compChoice][6] != '-')
        {
            columnFull = true;
        }
        else
        {
            columnFull = false;
        }
    }
    dropChipInColumn(compColor, compChoice);
    cout << "Computer dropped in column: " << compChoice + 1 << endl;
}

void dropChipInColumn(char color, int column)
{
    bool foundEmpty = false;
    int row = 0;
    while (foundEmpty == false)
    {
        if (board[column][row] == '-')
        {
            foundEmpty = true;
            board[column][row] = color;
        }
        else
            row = row + 1;
    }
}

void drawBoard()
{
    for (int row = 6; row >= 0; row--)
    {
        cout << board[0][row] << "  " << board[1][row] << "  " << board[2][row] << "  " << board[3][row] << "  " << board[4][row] << "  " << board[5][row] << endl;
    }
}
