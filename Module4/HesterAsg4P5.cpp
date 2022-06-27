// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 4 Problem 5

// This program is going to open a file and display data accordingly.

#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main()

{
    int total = 0;
    float average = 0;
    float sum = 0;
    float min = 0;
    float max = 0;
    ifstream dataIn;

    dataIn.open("Numbers.txt");
    float nextNum;
    while(dataIn >> nextNum){
        total = total + 1;
        if(total <= 15){
            sum = sum + nextNum;
        }
        if(total == 22){
            average = average / 22;
        } 
        if(total < 22) {
            average = average + nextNum;
        }
        if(min == 0) min = nextNum;
        if(max == 0) max = nextNum;
        if(min > nextNum) min = nextNum;
        if(max < nextNum) max = nextNum;
    }

    cout << "The total amount of numbers in the file is: " << total << endl;
    cout << "The average of the first 22 numbers is :" << average << endl;
    cout << "The sum of the first 15 numbers is: " << sum << endl;
    cout << "The minimum value is: " << min << endl;
    cout << "The maximum value is: " << max << endl; 



    return 0; 
}