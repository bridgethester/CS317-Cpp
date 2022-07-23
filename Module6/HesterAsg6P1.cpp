// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Assignment 6 Problem 1

// This program will the user for the name of a file to open. The numbers in that file will then be stored in an array.
// Then through a few functions, the lowest value, highest value, sum, and average will be printed back to user.

#include <iostream>
#include <fstream>
using namespace std;

int getNums(float nums[]);
float lowestNum(float nums[], int count);
float highestNum(float nums[], int count);
float sum(float nums[], int count);
float average(float nums[], int count, float sumNum);

int main()
{
    float nums[1000];
    float sumNum;
    float highest;
    float lowest;
    float averageNum;
    int count = getNums(nums);
    lowest = lowestNum(nums, count);
    highest = highestNum(nums, count);
    sumNum = sum(nums, count);
    averageNum = average(nums, count, sumNum);
}

// function for reading nums and storing in an array
int getNums(float nums[])
{
    string fileName;
    fstream dataIn;
    cout << "Please enter the name of the file to open: " << endl;
    cin >> fileName;
    dataIn.open(fileName);
    float num;
    int count;
    while (dataIn >> num)
    {
        nums[count] = num;
        count = count + 1;
    }
    dataIn.close();
    cout << "" << endl;
    return count;
}

// finds lowest num
float lowestNum(float nums[], int count)
{
    float lowest = nums[0];
    for (int i = 0; i < count; i++)
    {
        if (nums[i] < lowest)
            lowest = nums[i];
    }
    cout << "The lowest value in the file is: " << lowest << endl;
    cout << "" << endl;
    return lowest;
}
// finds highest value
float highestNum(float nums[], int count)
{
    float highest = nums[0];
    for (int i = 0; i < count; i++)
    {
        if (nums[i] > highest)
            highest = nums[i];
    }
    cout << "The highest value in the file is: " << highest << endl;
    cout << "" << endl;
    return highest;
}

// sum
float sum(float nums[], int count)
{
    float sumNum = 0;
    for (int i = 0; i < count; i++)
    {
        sumNum += nums[i];
    }
    cout << "The sum of all the numbers in the file is: " << sumNum << endl;
    cout << "" << endl;
    return sumNum;
}

// average
float average(float nums[], int count, float sumNum)
{
    float averageNum;
    averageNum = sumNum / count;
    cout << "The average of all the numbers in the file is: " << averageNum << endl;
    cout << "" << endl;
    return averageNum;
}
