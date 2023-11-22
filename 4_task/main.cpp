#include <iostream>
#include <ctime>

using  namespace std;

int main()
{
    //srand(time(0));
    int studentsCount = 20;
    int weeksCount = 18;
    int grades[studentsCount][weeksCount];

    // filling up array with a random numbers
    for (int i = 0; i < studentsCount; ++i)
    {
        for (int j = 0; j < weeksCount; ++j)
        {
            grades[i][j] = rand() % 4 + 2; // generate grade between 2 and 5
            cout << grades[i][j] << " ";
        }
        cout << endl;
    }

    // Counting number of weeks without 3 and 2 for each student
    int successfulWeeks[studentsCount];
    for (int i = 0; i < studentsCount; ++i)
    {
        successfulWeeks[i] = 0;
    }

    for (int i = 0; i < studentsCount; ++i)
    {
        for (int j = 0; j < weeksCount; ++j)
        {
            if (grades[i][j] >= 4)
            {
                successfulWeeks[i]++;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < studentsCount; ++i)
    {
            cout <<  successfulWeeks[i] << " ";
    }
    cout << endl << endl;

    // Finding the most successful student
    int maxSuccessfulWeeks = 0;
    int mostSuccessfulStudent = -1;

    for (int i = 0; i < studentsCount; ++i)
    {
        if (successfulWeeks[i] > maxSuccessfulWeeks)
        {
            maxSuccessfulWeeks = successfulWeeks[i];
            mostSuccessfulStudent = i;
        }
    }


    cout << "Most successful student is student " << mostSuccessfulStudent + 1 << endl;
    cout << "Number of weeks without threes and twos: " << maxSuccessfulWeeks << endl;

    return 0;
}
