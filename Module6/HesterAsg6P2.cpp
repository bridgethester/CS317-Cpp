// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Assignment 6 Problem 2

// This program will ask the user for the number of students which will
// set the size of the array. It will then ask for the user to input the grades of however
// many students. Then it will display the min, max, avg, mode, the grades from least to greatest,
// and the option to search the array.

#include <iostream>
using namespace std;

int minValue(int arr[], int x);
int maxValue(int arr[], int x);
float averageValue(int arr[], int x);
void modeValue(int arr[], int x);
void displayGrades(int arr[], int size);
void search(int arr[], int x, int y);
void finalDisplay(int arr[], int x);

int main()
{
    int sizeStudents;
    cout << "Please enter number of students for this array: " << endl;
    cin >> sizeStudents;
    int arr[sizeStudents];
    cout << "Please enter the test grades for " << sizeStudents << " students" << endl;
    for (int count = 0; count < sizeStudents; ++count)
    {
        cin >> arr[count];
    }
    // put final display function here
    finalDisplay(arr, sizeStudents);

    return (0);
}

// min value
int minValue(int arr[], int x)
{
    int count;
    int minimum = arr[0];

    for (count = 1; count < x; count++)
        if (arr[count] < minimum)
            minimum = arr[count];

    return minimum;
}

// maximum value
int maxValue(int arr[], int x)
{
    int count;
    int maximum = arr[0];

    for (count = 1; count < x; count++)
        if (arr[count] > maximum)
            maximum = arr[count];

    return maximum;
}

// average value
float averageValue(int arr[], int x)
{
    float sum = 0;
    for (int count = 0; count < x; count++)
    {
        sum += arr[count];
    }
    float average = sum / x;

    return average;
}

// mode of nums
// So, I was stuck but got help on how to find mode on geeksforgeeks.org
// this is the url for citing it! https://www.geeksforgeeks.org/mode/

void modeValue(int arr[], int x)
{

    int number = arr[0];
    int mode = number;
    int count = 1;
    int countMode = 1;

    for (int i = 1; i < x; i++)
    {
        if (arr[i] == number)
        {
            ++count;
        }
        else
        {
            if (count > countMode)
            {
                countMode = count;
            }
            count = 1;
            number = arr[i];
        }
    }
    cout << "The mode is : " << mode << endl;
}

// display maximum to min
// used book for help (pg. 473)

void displayGrades(int arr[], int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (arr[count] < arr[count + 1])
            {
                temp = arr[count];
                arr[count] = arr[count + 1];
                arr[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);

    for (int count = 0; count < (size); count++)
    {
        cout << "Grade " << count + 1 << ": " << arr[count] << endl;
    }
}

// search array
void search(int arr[], int x, int y)
{

    for (int count = 0; count < x; count++)
        if (arr[count] == y)
        {
            cout << "This number is found at spot " << count << " in the array." << endl;
            return;
        }
}

// final display
void finalDisplay(int arr[], int x)
{
    cout << "The maximum grade is: " << maxValue(arr, x) << endl;
    cout << "" << endl;
    cout << "The minimum grade is: " << minValue(arr, x) << endl;
    cout << "" << endl;
    cout << "The average grade is: " << averageValue(arr, x) << endl;
    cout << "" << endl;
    modeValue(arr, x);
    cout << "" << endl;
    cout << "The grades in order from maximum to minimum are: " << endl;
    displayGrades(arr, x);
    cout << "" << endl;
    int searchArray;
    cout << "Enter value to search for: ";
    cin >> searchArray;
    search(arr, x, searchArray);
    cout << "" << endl;
}
