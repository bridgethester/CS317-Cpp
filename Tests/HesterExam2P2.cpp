// Bridget Hester
// bhester1@my.athens.edu
// 00089657
// Exam 2 Program 2

// This program will open an output ﬁle with the ﬁlename Numbers.txt,
// & use a counted loop to write 100 random numbers to the ﬁle, and then close the ﬁle.

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ofstream dataOut;
    dataOut.open("Numbers.txt");

    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        dataOut << rand() % 100 + 1 << endl;
    }

    dataOut.close();
    return 0;
}
