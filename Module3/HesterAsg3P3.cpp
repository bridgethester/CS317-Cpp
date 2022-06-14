// Bridget Hester 
// bhester1@my.athens.edu
// 00089657
// Assignment 3 Problem 3

// This program asks for the names of the 3 teen competitors, 
// displays a menu for the user to pick an event, asks for the scores, 
// & and ultimately displays the results of the competition. 

#include <iostream>
#include <iomanip>
#include <cstdlib> 


using namespace std;

int main()
{   //variables
    string nameOne;
    string nameTwo;
    string nameThree;
    int choice;
    float stone1, stone2, stone3;
    float stone1_1, stone2_1, stone3_1;
    float stone1_2, stone2_2, stone3_2;
    float seconds1, seconds2, seconds3;
    float seconds1_1, seconds2_1, seconds3_1;
    float seconds1_2, seconds2_2, seconds3_2;
    float pounds1, pounds2, pounds3;
    float pounds1_1, pounds2_1, pounds3_1;
    float pounds1_2, pounds2_2, pounds3_2;
    float kegCarry1, kegCarry2, kegCarry3;  
    float kegCarry1_1, kegCarry2_1, kegCarry3_1;
    float kegCarry1_2, kegCarry2_2, kegCarry3_2;
    string compName;

    cout << " " << endl;
    cout << "To get started, who competed in today's competition?";

    // entering boys names
    cout <<" "<< endl;
    cout << "Please enter the name of competitor 1: " << endl;
    cin >> nameOne;
    cout << "Please enter the name of competitor 2: " << endl;
    cin >> nameTwo;
    cout << "Please enter the name of competitor 3: " << endl;
    cin >> nameThree;

    const int stoneOverChoice = 1, farmersFrame = 2, axleDeadLiftChoice = 3, yokeCarryChoice = 4;
    string firstPlace, secondPlace, thirdPlace;

    // displaying the menu for the user

    cout << "\t\t** Strong Man Competition Menu **\n\n"
    <<"\t\t1. Stone Over Bar\n "
    <<"\t\t2. Farmers Frame Medley\n "
    <<"\t\t3. Axle Deadlift\n "
    <<"\t\t4. Yoke Carry Keg Medley\n\n "
    <<"Enter your choice:  ";
    cin>>choice;

    cout<< fixed << showpoint << setprecision(2); // for the decimal places


switch(choice) // getting the scores #1
{
    case stoneOverChoice:
    cout << "\tFirst Attempt: How many stones was " << nameOne << " able to lift?: \n";
    cin >> stone1_1;
    cout << "\tFirst Attempt: How many stones was " << nameTwo << " able to lift?: \n";
    cin >> stone2_1;
    cout << "\tFirst Attempt: How many stones was " << nameThree << " able to lift?: \n";
    cin >> stone3_1;
    cout << "\tSecond Attempt: How many stones was " << nameOne << " able to lift?: \n";
    cin >> stone1_2;
    cout << "\tSecond Attempt: How many stones was " << nameTwo << " able to lift?: \n";
    cin >> stone2_2;
    cout << "\tSecond Attempt: How many stones was " << nameThree << " able to lift?: \n";
    cin >> stone3_2;
    break;
    case farmersFrame:
    cout << "\tFirst Attempt: How many seconds did it take for " << nameOne << " to complete?\n";
    cin >> seconds1_1;
    cout << "\tFirst Attempt: How many seconds did it take for " << nameTwo << " to complete?\n";
    cin >> seconds2_1;
    cout << "\tFirst Attempt: How many seconds did it take for " << nameThree << " to complete?\n";
    cin >> seconds3_1;
    cout << "\tSecond Attempt: How many seconds did it take for " << nameOne << " to complete?\n";
    cin >> seconds1_2;
    cout << "\tSecond Attempt: How many seconds did it take for " << nameTwo << " to complete?\n";
    cin >> seconds2_2;
    cout << "\tSecond Attempt: How many seconds did it take for " << nameThree << " to complete?\n";
    cin >> seconds3_2;
    break;
    case axleDeadLiftChoice:
    cout << "\tFirst Attempt: How many pounds was " << nameOne << " able to lift?\n";
    cin >> pounds1_1;
    cout << "\tFirst Attempt: How many pounds was " << nameTwo << " able to lift?\n";
    cin >> pounds2_1;
    cout << "\tFirst Attempt: How many pounds was " << nameThree << " able to lift?\n";
    cin >> pounds3_1;
    cout << "\tSecond Attempt: How many pounds was " << nameOne << " able to lift?\n";
    cin >> pounds1_2;
    cout << "\tSecond Attempt: How many pounds was " << nameTwo << " able to lift?\n";
    cin >> pounds2_2;
    cout << "\tSecond Attempt: How many pounds was " << nameThree << " able to lift?\n";
    cin >> pounds3_2;
    break;
    case yokeCarryChoice:
    cout << "\tFirst Attempt: How many seconds did it take for " << nameOne << " to complete?\n";
    cin >> kegCarry1_1;
    cout << "\tFirst Attempt: How many seconds did it take for " << nameTwo << " to complete?\n";
    cin >> kegCarry2_1;
    cout << "\tFirst Attempt: How many seconds did it take for " << nameThree << " to complete?\n";
    cin >> kegCarry3_1;
    cout << "\tSecond Attempt: How many seconds did it take for " << nameOne << " to complete?\n";
    cin >> kegCarry1_2;
    cout << "\tSecond Attempt: How many seconds did it take for " << nameTwo << " to complete?\n";
    cin >> kegCarry2_2;
    cout << "\tSecond Attempt: How many seconds did it take for " << nameThree << " to complete?\n";
    cin >> kegCarry3_2;
    break; 
    default:
    cout << "The options are 1-4. Please re-run the program\n";
    break;

}
    // assigning highest score to final variable
    // first teen

if (stone1_1 > stone1_2)
    stone1 = stone1_1;
    else 
    stone1 = stone1_2;

if (seconds1_1 > seconds1_2)
    seconds1 = seconds1_1;
    else
    seconds1 = seconds1_2;

if (pounds1_1 > pounds1_2)
    pounds1 = pounds1_1;
    else
    pounds1 = pounds1_2;

if (kegCarry1_1 > kegCarry1_2)
    kegCarry1 = kegCarry1_1;
    else
    kegCarry1 = kegCarry1_2;

 // second teen

if (stone2_1 > stone2_2)
    stone2 = stone2_1;
    else 
    stone2 = stone2_2;

if (seconds2_1 > seconds2_2)
    seconds2 = seconds2_1;
    else
    seconds2 = seconds2_2;

if (pounds2_1 > pounds2_2)
    pounds2 = pounds2_1;
    else
    pounds2 = pounds2_2;

if (kegCarry2_1 > kegCarry2_2)
    kegCarry2 = kegCarry2_1;
    else
    kegCarry2 = kegCarry2_2;

 // third teen

 if (stone3_1 > stone3_2)
    stone3 = stone3_1;
    else 
    stone3 = stone3_2;

if (seconds3_1 > seconds3_2)
    seconds3 = seconds3_1;
    else
    seconds3 = seconds3_2;

if (pounds3_1 > pounds3_2)
    pounds3 = pounds3_1;
    else
    pounds3 = pounds3_2;

if (kegCarry3_1 > kegCarry3_2)
    kegCarry3 = kegCarry3_1;
    else
    kegCarry3 = kegCarry3_2;

    // stone score placement

if (stone1 > stone2 && stone1 > stone3 ){
    firstPlace = nameOne;
} else if (stone1 < stone2 && stone1 > stone3){
    secondPlace = nameOne;
} else if (stone1 < stone2 && stone1 < stone3){
    thirdPlace = nameOne;
}
if (stone2 > stone1 && stone2 > stone3 ){
    firstPlace = nameTwo;
} else if (stone2 < stone1 && stone2 > stone3){
    secondPlace = nameTwo;
} else if (stone2 < stone1 && stone2 < stone3){
    thirdPlace = nameTwo;
}
if (stone3 > stone1 && stone3 > stone2 ){
    firstPlace = nameThree;
} else if (stone3 < stone1 && stone3 > stone2){
    secondPlace = nameThree;
} else if (stone3 < stone1 && stone3 < stone2){
    thirdPlace = nameThree;
}

    // seconds score placement

if (seconds1 < seconds2 && seconds1 < seconds3 ){
    firstPlace = nameOne;
} else if (seconds1 < seconds2 && seconds1 > seconds3){
    secondPlace = nameOne;
} else if (seconds1 > seconds2 && seconds1 > seconds3){
    thirdPlace = nameOne;
}
if (seconds2 < seconds1 && seconds2 < seconds3 ){
    firstPlace = nameTwo;
} else if (seconds2 < seconds1 && seconds2 > seconds3){
    secondPlace = nameTwo;
} else if (seconds2 > seconds1 && seconds2 > seconds3)
    thirdPlace = nameTwo;

if (seconds3 < seconds1 && seconds3 < seconds2 ){
    firstPlace = nameThree;
} else if (seconds3 < seconds1 && seconds3 > seconds2){
    secondPlace = nameThree;
} else if (seconds3 > seconds1 && seconds3 > seconds2){
    thirdPlace = nameThree;
}

    // pounds score placement

if (pounds1 > pounds2 && pounds1 > pounds3 ){
    firstPlace = nameOne;
} else if (pounds1 < pounds2 && pounds1 > pounds3){
    secondPlace = nameOne;
} else if (pounds1 < pounds2 && pounds1 < pounds3){
    thirdPlace = nameOne;
}
if (pounds2 > pounds1 && pounds2 > pounds3 ){
    firstPlace = nameTwo;
} else if (pounds2 < pounds1 && pounds2 > pounds3){
    secondPlace = nameTwo;
} else if (pounds2 < pounds1 && pounds2 < pounds3){
    thirdPlace = nameTwo;
}
if (pounds3 > pounds1 && pounds3 > pounds2 ){
    firstPlace = nameThree;
} else if (pounds3 < pounds1 && pounds3 > pounds2){
    secondPlace = nameThree;
} else if (pounds3 < pounds1 && pounds3 < pounds2){
    thirdPlace = nameThree;
}

    // Keg Carry score Placement

if (kegCarry1 < kegCarry2 && kegCarry1 < kegCarry3 ){
    firstPlace = nameOne;
} else if (kegCarry1 < kegCarry2 && kegCarry1 > kegCarry3){
    secondPlace = nameOne;
} else if (kegCarry1 > kegCarry2 && kegCarry1 > kegCarry3){
    thirdPlace = nameOne;
}
if (kegCarry2 < kegCarry1 && kegCarry2 < kegCarry3 ){
    firstPlace = nameTwo;
} else if (kegCarry2 < kegCarry1 && kegCarry2 > kegCarry3){
    secondPlace = nameTwo;
} else if (kegCarry2 > kegCarry1 && kegCarry2 > kegCarry3){
    thirdPlace = nameTwo;
}
if (kegCarry3 < kegCarry1 && kegCarry3 < kegCarry2 ){
    firstPlace = nameThree;
} else if (kegCarry3 < kegCarry1 && kegCarry3 > kegCarry2){
    secondPlace = nameThree;
} else if (kegCarry3 > kegCarry1 && kegCarry3 > kegCarry2){
    thirdPlace = nameThree;
}

    // making sure the program ends if a negative num is entered

    {if (stone1 < 0 && stone2 < 0 && stone3 < 0)
    return 0;}

    {if (seconds1 < 0 && seconds2 < 0 && seconds3 < 0)
    return 0;}

    {if (pounds1 < 0 && pounds2 < 0 && pounds3 < 0)
    return 0;}

    {if (kegCarry1 < 0 && kegCarry2 < 0 && kegCarry3 < 0)
    return 0;}


    // setting competition names

if (choice == 1){
    compName = "Stone Over Bar";
}
    else if (choice == 2){
        compName = "Farmers Frame Medley";
    }
    else if (choice == 3){
        compName = "Axle Deadlift";
    }
    else if (choice == 4){
        compName = "Yoke Carry Keg Medley";
    }


    // displaying final results
cout << "*******************************************************************" << endl;
cout << "                                                                " << endl;
switch(choice)
{   case stoneOverChoice:
    cout << "\t\tCompetitor's Name: " << nameOne << endl;
    cout << "\t\tHighest Score in Event: " << stone1 << endl;
    cout << "\t\tCompetitor's Name: " << nameTwo << endl;
    cout << "\t\tHighest Score in Event: " << stone2 << endl;
    cout << "\t\tCompetitor's Name: " << nameThree << endl;
    cout << "\t\tHighest Score in Event: " << stone3 << endl;
    break;
    case farmersFrame:
    cout << "\t\tCompetitor's Name: " << nameOne << endl;
    cout << "\t\tHighest Score in Event: " << seconds1 << endl;
    cout << "\t\tCompetitor's Name: " << nameTwo << endl;
    cout << "\t\tHighest Score in Event: " << seconds2 << endl;
    cout << "\t\tCompetitor's Name: " << nameThree << endl;
    cout << "\t\tHighest Score in Event: " << seconds3 << endl;
    break;
    case axleDeadLiftChoice:
    cout << "\t\tCompetitor's Name: " << nameOne << endl;
    cout << "\t\tHighest Score in Event: " << pounds1 << endl;
    cout << "\t\tCompetitor's Name: " << nameTwo << endl;
    cout << "\t\tHighest Score in Event: " << pounds2 << endl;
    cout << "\t\tCompetitor's Name: " << nameThree << endl;
    cout << "\t\tHighest Score in Event: " << pounds3 << endl;
    break;
    case yokeCarryChoice:
    cout << "\t\tCompetitor's Name: " << nameOne << endl;
    cout << "\t\tHighest Score in Event: " << kegCarry1 << endl;
    cout << "\t\tCompetitor's Name: " << nameTwo << endl;
    cout << "\t\tHighest Score in Event: " << kegCarry2 << endl;
    cout << "\t\tCompetitor's Name: " << nameThree << endl;
    cout << "\t\tHighest Score in Event: " << kegCarry3 << endl;
    break;
}  
    cout << "                                                                " << endl;
    cout << "*******************************************************************" << endl;
    cout << "                                                                " << endl;
    cout << "\t\tThe name of the event is:  " << compName << endl;
    cout << "\t\tFirst Place is: " << firstPlace << " and earned 3 points"  << endl;
    cout << "\t\tSecond Place is: " << secondPlace << " and earned 2 points" << endl;
    cout << "\t\tThird Place is: " << thirdPlace << " and earned 1 points"   << endl;
    cout << "                                                               " << endl;
    cout << "*******************************************************************" << endl;

    
    return 0;
}

