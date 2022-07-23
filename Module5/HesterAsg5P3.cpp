// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 5 Problem 3

// This program will be working with the file Numbers.txt from assignment 4.
// However it is incorporating alot of functions. 


#include <iostream>
#include <fstream>
using namespace std;

string fileName;
ifstream dataIn;
void getFileName();
void fileOpen();
void fileClose();
int totalNumbers();
float averageNumbers();
float sumNumbers();
float minValue();
float maxValue();

int main()
{
    getFileName();
    fileOpen();
    fileClose();
    totalNumbers();
    averageNumbers();
    sumNumbers();
    minValue();
    maxValue();
}

// function asking user for file
void getFileName()
{

    cout << "Please enter the name of the file you want to open: " << endl;
    cin >> fileName ;
}

// function to close file
void fileOpen()
{
    dataIn.open(fileName);
}

// function to close file
void fileClose()
{
    dataIn.close();
}

// function for counting how many numbers are in the file & displays
int totalNumbers()
{
    fileOpen();
    float nextNum;
    int total = 0;

    while(dataIn >> nextNum){
        total = total + 1;
    }
    fileClose();

    cout << "Total is: " << total << endl;
    return total;
    
}

// function for averaging the first 22 numbers & displays
float averageNumbers()
{
    fileOpen();
    float nextNum;
    float average;
    int total = 0;
    while(dataIn >> nextNum){
        total = total + 1;
        if(total == 22){
            average = average / 22;
        } 
        if(total < 22) {
            average = average + nextNum;
        }
    }
    fileClose();

    cout << "The average is: " << average << endl;
    return average;
}
// function for finding the sum of the first 15 numbers & displays
float sumNumbers()
{
    fileOpen();
    float nextNum;
    float sum;
    int total;

    while(dataIn >> nextNum){
        total = total + 1;
        if(total <= 15){
            sum = sum + nextNum;
        }
    }

    fileClose();

    cout << "The sum is: " << sum << endl;
    return sum;
}
// function for determining lowest value in the file & displays
float minValue()
{
    fileOpen();
    float nextNum;
    float min;
    while(dataIn >> nextNum){
        if(min == 0) min = nextNum;
        if(min > nextNum) min = nextNum;
    }
    fileClose();
    
    cout << "The lowest value is: " << min << endl;
    return min;
}
// function for determining max value in the file & displays
float maxValue()
{
    fileOpen();
    float nextNum;
    float max;
    while(dataIn >> nextNum){
        if(max == 0) max = nextNum;
        if(max < nextNum) max = nextNum;
    }
    fileClose();
    cout << "The highest value is: " << max << endl;
    return max;
}
