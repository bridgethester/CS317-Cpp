// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 5 Problem 1

/* this program will have a number of functions that each do a task:
1. A function that asks the user to enter in the amount of weight in pounds.
2. A function that will calculate the exact weight in Kilos
3. A function that will calculate the estimate weight in Kilos
4. A function that will print the results to the screen */

#include <iostream>
using namespace std;

float weightPounds ();
float weightKilos (float pounds);
int weightKilosEst (float pounds);
void Results (float exactKilos, float enterPounds, int estimateKilos);



int main ()
{
    float enterPounds;
    float exactKilos;
    int estimateKilos; 

    enterPounds = weightPounds();
    exactKilos = weightKilos(enterPounds);
    estimateKilos = weightKilosEst(enterPounds);
    Results(exactKilos, enterPounds, estimateKilos);   // how do i define these? // also need to set

    return 0;
}


float weightPounds ()
{
    float pounds;
    cout << "Please enter amount of weight in pounds: " << endl;
    cin >> pounds;
    return pounds;
}

float weightKilos (float pounds)
{
     
    return pounds / 2.2046;
}

int weightKilosEst (float pounds)
{
    return pounds / 2.2; 

}

void Results (float exactKilos, float enterPounds, int estimateKilos)
{
    cout << enterPounds << " pounds converts to around " << estimateKilos << " kilos and exactly " << exactKilos << " kilos." << endl;
}