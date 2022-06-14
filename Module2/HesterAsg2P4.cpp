// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 2 Problem 4

// This program is going to play a game with the user and display a little story at the end.

#include <iostream>
#include <iomanip>	
using namespace std;

string name;
int age;
string city;
string college;
string profession;
string pet;
string animal;

int main()
{ 
    cout << "" << endl;
    cout << "For this game let's start with entering your name: " << endl;
    getline(cin,name);
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter the name of the city you live in: " << endl;
    getline(cin,city);
    getline(cin,city);
    cout << "Enter the name of your college: " << endl;
    getline(cin,college);
    cout << "Enter your current job: " << endl;
    cin >> profession;
    cout << "What kind of animal do you have?: " << endl;
    cin >> animal; 
    cout << "Enter your pet's name: " << endl;
    cin >> pet; 
    cout << "" << endl;
    cout << "There once was a person named " << name << " who lived in " << city << 
    ". At the age of "  << age << " " << name << " went to college at " 
    << college << ". " << name << 
    " graduated and went to work as a " << profession << ". Then, " 
    << name << " adopted a(n) "
     << animal << " named " << pet <<". They both lived happily ever after. " << endl;



    return 0;
    }