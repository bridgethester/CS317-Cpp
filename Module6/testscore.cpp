// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Bridget Hester

#include <iostream>
using namespace std;
typedef int GradeType[100];
float findAverage(const GradeType, int);
int findHighest(const GradeType, int);
int findLowest(const GradeType, int);
int main()
{
	GradeType grades;
	int numberOfGrades;
	int pos;
	float avgOfGrades;
	int highestGrade;
	int lowestGrade;
	pos = 0;
	printf("Please input a grade from 1 to 100, (or -99 to stop)\n");
	cin >> grades[pos];
	while (grades[pos] != -99)
	{
		pos++;
		cin >> grades[pos];
	}
	numberOfGrades = pos;
	avgOfGrades = findAverage(grades, numberOfGrades);
	printf("The average of all grades is %.2f\n", avgOfGrades);
	highestGrade = findHighest(grades, numberOfGrades);
	printf("The highest grade is %d.\n", highestGrade);
	lowestGrade = findLowest(grades, numberOfGrades);
	printf("The lowest grade is %d.\n", lowestGrade);
	return 0;
}
float findAverage(const GradeType array, int size)
{
	float sum = 0;
	for (int pos = 0; pos < size; pos++)
		sum = sum + array[pos];
	return (sum / size);
}
int findHighest(const GradeType array, int size)
{
	int highestgrade = array[0];
	for (int pos = 0; pos < size; pos++)
		if (array[pos] > highestgrade)
		{
			highestgrade = array[pos];
		}
	return highestgrade;
}
int findLowest(const GradeType array, int size)
{
	int lowestgrade = array[0];
	for (int pos = 0; pos < size; pos++)
		if (array[pos] < lowestgrade)
		{
			lowestgrade = array[pos];
		}
	return lowestgrade;
}