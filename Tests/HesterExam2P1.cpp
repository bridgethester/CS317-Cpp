// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Exam 2 Program 1

// This program will ask the user to enter 5 colors. Once they enter 5 colors,
// it will then alphabetize then and print them back to the screen.

#include <iostream>
using namespace std;

int main()
{
    string color1, color2, color3, color4, color5;

    cout << "Please enter 5 colors: " << endl;
    cout << "Color 1: ";
    cin >> color1;
    cout << "Color 2: ";
    cin >> color2;
    cout << "Color 3: ";
    cin >> color3;
    cout << "Color 4: ";
    cin >> color4;
    cout << "Color 5: ";
    cin >> color5;
    for (int i = 0; i < 5; i++)
    {

        if (color1 > color2)
        {
            string temp = color2;
            color2 = color1;
            color1 = temp;
        }
        if (color2 > color3)
        {
            string temp = color3;
            color3 = color2;
            color2 = temp;
        }
        if (color3 > color4)
        {
            string temp = color4;
            color4 = color3;
            color3 = temp;
        }
        if (color4 > color5)
        {
            string temp = color5;
            color5 = color4;
            color4 = temp;
        }
    }

    cout << "The 5 colors you entered in alphabetical order: " << endl;
    cout << color1 << endl;
    cout << color2 << endl;
    cout << color3 << endl;
    cout << color4 << endl;
    cout << color5 << endl;
    return 0;
}
