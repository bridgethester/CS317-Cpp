// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Exam 2 Program 3

// This program will ask 5 judges for the scores of 2 contestants.
// The highest and lowest are dropped and then the remaining three scores are
// used to find the average (final score).
// In the end, it will display the three scores used to calculate the final score and
// the final score for each of the contestants.

#include <iostream>
using namespace std;

double getJudgeData(double &judgeScore);
double calcScore(double jScore1, double jScore2, double jScore3, double jScore4, double jScore5);
int findLowest(double jScore1, double jScore2, double jScore3, double jScore4, double jScore5);
int findHighest(double jScore1, double jScore2, double jScore3, double jScore4, double jScore5);

int main()
{
    double judgeScore;
    double score1 = getJudgeData(judgeScore);
    double score2 = getJudgeData(judgeScore);
    cout << " | Contestant 1 scored a " << score1 << " | " << endl;
    cout << " | Contestant 2 scored a " << score2 << " | " << endl;
    cout << "" << endl;

    return 0;
}

double getJudgeData(double &judgeScore)
{
    double tempScore, jScore1, jScore2, jScore3, jScore4, jScore5;
    cout << "" << endl;
    cout << "Please enter the judges score for the contestant: " << endl;
    cin >> tempScore;
    while (tempScore < 0 || tempScore > 10)
    {
        cout << "Not a valid input" << endl;
        cin >> tempScore;
    }
    jScore1 = tempScore;
    cin >> tempScore;
    while (tempScore < 0 || tempScore > 10)
    {
        cout << "Not a valid input" << endl;
        cin >> tempScore;
    }
    jScore2 = tempScore;
    cin >> tempScore;
    while (tempScore < 0 || tempScore > 10)
    {
        cout << "Not a valid input" << endl;
        cin >> tempScore;
    }
    jScore3 = tempScore;
    cin >> tempScore;
    while (tempScore < 0 || tempScore > 10)
    {
        cout << "Not a valid input" << endl;
        cin >> tempScore;
    }
    jScore4 = tempScore;
    cin >> tempScore;
    while (tempScore < 0 || tempScore > 10)
    {
        cout << "Not a valid input" << endl;
        cin >> tempScore;
    }
    jScore5 = tempScore;

    return calcScore(jScore1, jScore2, jScore3, jScore4, jScore5);
}

double calcScore(double jScore1, double jScore2, double jScore3, double jScore4, double jScore5)
{
    int lowest = findLowest(jScore1, jScore2, jScore3, jScore4, jScore5);
    int highest = findHighest(jScore1, jScore2, jScore3, jScore4, jScore5);
    if (lowest == 1 && highest == 2)
    {
        return (jScore3 + jScore4 + jScore5) / 3;
    }
    if (lowest == 1 && highest == 3)
    {
        return (jScore2 + jScore4 + jScore5) / 3;
    }
    if (lowest == 1 && highest == 4)
    {
        return (jScore2 + jScore3 + jScore5) / 3;
    }
    if (lowest == 1 && highest == 5)
    {
        return (jScore2 + jScore3 + jScore4) / 3;
    }
    if (lowest == 2 && highest == 1)
    {
        return (jScore4 + jScore3 + jScore5) / 3;
    }
    if (lowest == 2 && highest == 3)
    {
        return (jScore4 + jScore1 + jScore5) / 3;
    }
    if (lowest == 2 && highest == 4)
    {
        return (jScore3 + jScore1 + jScore5) / 3;
    }
    if (lowest == 2 && highest == 5)
    {
        return (jScore3 + jScore1 + jScore4) / 3;
    }
    if (lowest == 3 && highest == 1)
    {
        return (jScore2 + jScore5 + jScore4) / 3;
    }
    if (lowest == 3 && highest == 2)
    {
        return (jScore1 + jScore5 + jScore4) / 3;
    }
    if (lowest == 3 && highest == 4)
    {
        return (jScore1 + jScore5 + jScore2) / 3;
    }
    if (lowest == 3 && highest == 5)
    {
        return (jScore1 + jScore4 + jScore2) / 3;
    }
    if (lowest == 4 && highest == 1)
    {
        return (jScore3 + jScore5 + jScore2) / 3;
    }
    if (lowest == 4 && highest == 2)
    {
        return (jScore3 + jScore5 + jScore1) / 3;
    }
    if (lowest == 4 && highest == 3)
    {
        return (jScore2 + jScore5 + jScore1) / 3;
    }
    if (lowest == 4 && highest == 5)
    {
        return (jScore2 + jScore3 + jScore1) / 3;
    }
    if (lowest == 5 && highest == 1)
    {
        return (jScore2 + jScore3 + jScore4) / 3;
    }
    if (lowest == 5 && highest == 2)
    {
        return (jScore1 + jScore3 + jScore4) / 3;
    }
    if (lowest == 5 && highest == 3)
    {
        return (jScore1 + jScore2 + jScore4) / 3;
    }
    if (lowest == 5 && highest == 4)
    {

        return (jScore1 + jScore2 + jScore3) / 3;
    }
    return -1;
}

int findLowest(double jScore1, double jScore2, double jScore3, double jScore4, double jScore5)
{
    if (jScore1 < jScore2 && jScore1 < jScore3 && jScore1 < jScore4 && jScore1 < jScore5)
    {
        return 1;
    }
    if (jScore2 < jScore1 && jScore2 < jScore3 && jScore2 < jScore4 && jScore2 < jScore5)
    {
        return 2;
    }
    if (jScore3 < jScore1 && jScore3 < jScore2 && jScore3 < jScore4 && jScore3 < jScore5)
    {
        return 3;
    }
    if (jScore4 < jScore1 && jScore4 < jScore3 && jScore4 < jScore2 && jScore4 < jScore5)
    {
        return 4;
    }
    if (jScore5 < jScore1 && jScore5 < jScore3 && jScore5 < jScore4 && jScore5 < jScore2)
    {
        return 5;
    }
    return -1;
}

int findHighest(double jScore1, double jScore2, double jScore3, double jScore4, double jScore5)
{
    if (jScore1 > jScore2 && jScore1 > jScore3 && jScore1 > jScore4 && jScore1 > jScore5)
    {
        return 1;
    }
    if (jScore2 > jScore1 && jScore2 > jScore3 && jScore2 > jScore4 && jScore2 > jScore5)
    {
        return 2;
    }
    if (jScore3 > jScore1 && jScore3 > jScore2 && jScore3 > jScore4 && jScore3 > jScore5)
    {
        return 3;
    }
    if (jScore4 > jScore1 && jScore4 > jScore3 && jScore4 > jScore2 && jScore4 > jScore5)
    {
        return 4;
    }
    if (jScore5 > jScore1 && jScore5 > jScore3 && jScore5 > jScore4 && jScore5 > jScore2)
    {
        return 5;
    }
    return -1;
}
