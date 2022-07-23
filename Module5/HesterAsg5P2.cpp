// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 5 Problem 2

// This program's intent is to revamp The Strong Man problem from
// assignment 3, and make it more user friendly. 

#include <iostream>
#include <iomanip> 
using namespace std;

string nameOne, nameTwo, nameThree;
int scoreOne, scoreTwo, scoreThree;


// function prototypes
char menu();
void enterNames();
void farmersFrame(char choice);
void axleDeadlift(char choice);
void yokeCarry(char choice);
void stoneOver(char choice);
void Results(char choice);
void scoreUsingLowWins(float s1, float s2, float s3);
void scoreUsingHighWins(float s1, float s2, float s3);



int main()
{   
    char choice;
    enterNames ();
    do{
        choice = menu();
        farmersFrame(choice);
        axleDeadlift(choice);
        yokeCarry(choice);
        stoneOver(choice);
    } while(choice != '5');
    Results(choice);
    return 0;
}

// function for menu

char menu ()
{
    char choice;
    cout << "\t\t** Strong Man Competition Menu **\n\n"
    <<"\t\t1. Farmers Frame Medley\n "
    <<"\t\t2. Axle Deadlift\n " 
    <<"\t\t3. Stone Over Bar\n "
    <<"\t\t4. Yoke Carry Keg Medley\n "
    <<"\t\t5. Quit\n\n"
    <<"Enter your choice:  ";
    cin>>choice;
    return choice;
}

// function for entering competitors
void enterNames ()
{
    cout <<" "<< endl;
    cout << "Please enter the name of competitor 1: " << endl;
    cin >> nameOne;
    cout << "Please enter the name of competitor 2: " << endl;
    cin >> nameTwo;
    cout << "Please enter the name of competitor 3: " << endl;
    cin >> nameThree;
}

// function for user validation 
// come back - dont forget this one 

// function for Farmers Frame Medley
void farmersFrame(char choice)

{
    float farmersScore1, farmersScore2, farmersScore3;
    float farmersScore1_1, farmersScore2_1, farmersScore3_1;
    float farmersScore1_2, farmersScore2_2, farmersScore3_2;

    void menu (char choice);

    if (choice == '1' && choice != '5')
    {
        cout << "How many seconds did it take for " << nameOne << " to complete this competiton the first attempt?" << endl;
        cin >> farmersScore1_1;
        cout << "How many seconds did it take for " << nameTwo << " to complete this competiton the first attempt?" << endl;
        cin >> farmersScore2_1;
        cout << "How many seconds did it take for " << nameThree << " to complete this competiton the first attempt?" << endl;
        cin >> farmersScore3_1;

        cout << "How many seconds did it take for " << nameOne << " to complete this competiton the second attempt?" << endl;
        cin >> farmersScore1_2;
        cout << "How many seconds did it take for " << nameTwo << " to complete this competiton the second attempt?" << endl;
        cin >> farmersScore2_2;
        cout << "How many seconds did it take for " << nameThree << " to complete this competiton the second attempt?" << endl;
        cin >> farmersScore3_2;

        if(farmersScore1_1 < farmersScore1_2) farmersScore1 = farmersScore1_1;
        else farmersScore1 = farmersScore1_2;
        if(farmersScore2_1 < farmersScore2_2) farmersScore2 = farmersScore2_1;
        else farmersScore2 = farmersScore2_2;
        if(farmersScore3_1 < farmersScore3_2) farmersScore3 = farmersScore3_1;
        else farmersScore3 = farmersScore3_2;
        scoreUsingLowWins(farmersScore1, farmersScore2, farmersScore3);
    }
}

// function for Axle Deadlift
void axleDeadlift(char choice)
{   
    float axleScore1, axleScore2, axleScore3;
    float axleScore1_1, axleScore2_1, axleScore3_1;
    float axleScore1_2, axleScore2_2, axleScore3_2;

    void menu (char choice);


    if (choice == '2' && choice != '5')
    {
        cout << "How many pounds was " << nameOne << " able to lift their first attempt?" << endl;
        cin >> axleScore1_1;
        cout << "How many pounds was " << nameTwo << " able to lift their first attempt?" << endl;
        cin >> axleScore2_1;
        cout << "How many pounds was " << nameThree << " able to lift their first attempt?" << endl;
        cin >> axleScore3_1;

        cout << "How many pounds was " << nameOne << " able to lift their second attempt?" << endl;
        cin >> axleScore1_2;
        cout << "How many pounds was " << nameTwo << " able to lift their second attempt?" << endl;
        cin >> axleScore2_2;
        cout << "How many pounds was " << nameThree << " able to lift their second attempt?" << endl;
        cin >> axleScore3_2;
        if(axleScore1_1 > axleScore1_2) axleScore1 = axleScore1_1;
        else axleScore1 = axleScore1_2;
        if(axleScore2_1 > axleScore2_2) axleScore2 = axleScore2_1;
        else axleScore2 = axleScore2_2;
        if(axleScore3_1 > axleScore3_2) axleScore3 = axleScore3_1;
        else axleScore3 = axleScore3_2;
        scoreUsingHighWins(axleScore1, axleScore2, axleScore3);

    }
}



// function for Yoke Carry Keg Medley
void yokeCarry(char choice)
{

    float yokeScore1, yokeScore2, yokeScore3;
    float yokeScore1_1, yokeScore2_1, yokeScore3_1;
    float yokeScore1_2, yokeScore2_2, yokeScore3_2;

    void menu (char choice);


    if (choice == '4' && choice != '5')
    {
        cout << "How many seconds did it take for " << nameOne << " to complete this competiton the first attempt?" << endl;
        cin >> yokeScore1_1;
        cout << "How many seconds did it take for " << nameTwo << " to complete this competiton the first attempt?" << endl;
        cin >> yokeScore2_1;
        cout << "How many seconds did it take for " << nameThree << " to complete this competiton the first attempt?" << endl;
        cin >> yokeScore3_1;

        cout << "How many seconds did it take for " << nameOne << " to complete this competiton the second attempt?" << endl;
        cin >> yokeScore1_2;
        cout << "How many seconds did it take for " << nameTwo << " to complete this competiton the second attempt?" << endl;
        cin >> yokeScore2_2;
        cout << "How many seconds did it take for " << nameThree << " to complete this competiton the second attempt?" << endl;
        cin >> yokeScore3_2;

        if(yokeScore1_1 < yokeScore1_2) yokeScore1 = yokeScore1_1;
        else yokeScore1 = yokeScore1_2;
        if(yokeScore2_1 < yokeScore2_2) yokeScore2 = yokeScore2_1;
        else yokeScore2 = yokeScore2_2;
        if(yokeScore3_1 < yokeScore3_2) yokeScore3 = yokeScore3_1;
        else yokeScore3 = yokeScore3_2;
        scoreUsingLowWins(yokeScore1, yokeScore2, yokeScore3);
        
    }
    

}

// function for Stone Over

void stoneOver(char choice)
{
float stoneScore1, stoneScore2, stoneScore3;
float stoneScore1_1, stoneScore2_1, stoneScore3_1;
float stoneScore1_2, stoneScore2_2, stoneScore3_2;

    void menu (char choice);

    if (choice == '3' && choice != '5')
    {
        cout << "How many stones was " << nameOne << " able to lift their first attempt?" << endl;
        cin >> stoneScore1_1;
        cout << "How many stones was " << nameTwo << " able to lift their first attempt?" << endl;
        cin >> stoneScore2_1;
        cout << "How many stones was " << nameThree << " able to lift their first attempt?" << endl;
        cin >> stoneScore3_1;

        cout << "How many stones was " << nameOne << " able to lift their second attempt?" << endl;
        cin >> stoneScore1_2;
        cout << "How many stones was " << nameTwo << " able to lift their second attempt?" << endl;
        cin >> stoneScore2_2;
        cout << "How many stones was " << nameThree << " able to lift their second attempt?" << endl;
        cin >> stoneScore3_2;
        if(stoneScore1_1 > stoneScore1_2) stoneScore1 = stoneScore1_1;
        else stoneScore1 = stoneScore1_2;
        if(stoneScore2_1 > stoneScore2_2) stoneScore2 = stoneScore2_1;
        else stoneScore2 = stoneScore2_2;
        if(stoneScore3_1 > stoneScore3_2) stoneScore3 = stoneScore3_1;
        else stoneScore3 = stoneScore3_2;
        scoreUsingHighWins(stoneScore1, stoneScore2, stoneScore3);

    }
}
// function for quitting and displaying results
void Results(char choice)
{
    void menu (char choice);

    string firstPlace, secondPlace, thirdPlace;
    float firstPlaceScore, secondPlaceScore, thirdPlaceScore;

    if(scoreOne > scoreTwo && scoreOne > scoreThree){
        firstPlace = nameOne;
        firstPlaceScore = scoreOne;
    }
    else if((scoreOne > scoreTwo && scoreOne < scoreThree) || (scoreOne < scoreTwo && scoreOne > scoreThree)){
        secondPlace = nameOne;
        secondPlaceScore = scoreOne;
    }
    else {
        thirdPlace = nameOne;
        thirdPlaceScore = scoreOne;
    }
    if(scoreTwo > scoreOne && scoreTwo > scoreThree){
        firstPlaceScore = scoreTwo;
        firstPlace = nameTwo;
    }
    else if((scoreTwo > scoreOne && scoreTwo < scoreThree) || (scoreTwo < scoreOne && scoreTwo > scoreThree)){
        secondPlaceScore = scoreTwo;
        secondPlace = nameTwo;
    }
    else {
        thirdPlaceScore = scoreTwo;
        thirdPlace = nameTwo;
    }
    if(scoreThree > scoreTwo && scoreThree > scoreOne){
        firstPlaceScore = scoreThree;
        firstPlace = nameThree;
    }
    else if((scoreThree > scoreTwo && scoreThree < scoreOne) || (scoreThree < scoreTwo && scoreThree > scoreOne)){
        secondPlaceScore = scoreThree;
        secondPlace = nameThree;
    }
    else {
        thirdPlaceScore = scoreThree;
        thirdPlace = nameThree;
    }



    if (choice == '5')
    {
    
        cout << fixed << showpoint << setprecision(2); 

        cout << "First place goes to: " << firstPlace << " with " << firstPlaceScore << " points. " << endl;
        cout << "Second place goes to: " << secondPlace << " with " << secondPlaceScore << " points. " << endl;
        cout << "Third place goes to: " << thirdPlace << " with " << thirdPlaceScore << " points. " << endl;

    }

}

void scoreUsingHighWins(float s1, float s2, float s3){
    if(s1 > s2 && s1 > s3){
        scoreOne = scoreOne + 3;
    }
    else if((s1 < s2 && s1 > s3) || (s1 > s2 && s1 < s3)){
        scoreOne = scoreOne + 2;
    }
    else {
        scoreOne = scoreOne + 1;
    }
    if(s2 > s1 && s2 > s3){
        scoreTwo = scoreTwo + 3;
    }
    else if((s2 < s1 && s2 > s3) || (s2 > s1 && s2 < s3)){
        scoreTwo = scoreTwo + 2;
    }
    else {
        scoreTwo = scoreTwo + 1;
    }
    if(s3 > s2 && s3 > s1){
        scoreThree = scoreThree + 3;
    }
    else if((s3 < s2 && s3 > s1) || (s3 > s2 && s3 < s1)){
        scoreThree = scoreThree + 2;
    }
    else {
        scoreThree = scoreThree + 1;
    }
}

void scoreUsingLowWins(float s1, float s2, float s3){
     if(s1 < s2 && s1 < s3){
        scoreOne = scoreOne + 3;
    }
    else if((s1 > s2 && s1 < s3) || (s1 < s2 && s1 > s3)){
        scoreOne = scoreOne + 2;
    }
    else {
        scoreOne = scoreOne + 1;
    }
    if(s2 < s1 && s2 < s3){
        scoreTwo = scoreTwo + 3;
    }
    else if((s2 > s1 && s2 < s3) || (s2 < s1 && s2 > s3)){
        scoreTwo = scoreTwo + 2;
    }
    else {
        scoreTwo = scoreTwo + 1;
    }
    if(s3 < s2 && s3 < s1){
        scoreThree = scoreThree + 3;
    }
    else if((s3 > s2 && s3 < s1) || (s3 < s2 && s3 > s1)){
        scoreThree = scoreThree + 2;
    }
    else {
        scoreThree = scoreThree + 1;
    }


    
}



