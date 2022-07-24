#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Student Evaluation System\n"
         << setfill('=') << setw(26) << "\n";

    // read username
    cout << "Enter your username : ";
    string username;
    cin >> username;

    // read student id
    cout << "Enter your student ID : ";
    int studentId;
    cin >> studentId;

    int const SUBJECT_COUNT = 3;
    int marks[SUBJECT_COUNT]; // int array for subjects
    int sum = 0;
    bool isPassed = true;
    bool isFirstClass = true;

    cout << "Enter your marks :\n";
    for (int i = 0; i < SUBJECT_COUNT; i++)
    {
        // infinite loop
        while (true)
        {
            // read marks
            cout << "\tSubject #" << (i + 1) << " : ";
            cin >> marks[i];

            // if valid marks (0 - 100)
            if (marks[i] >= 0 && marks[i] <= 100)
            {
                break; // break loop
            }
            else
            {
                // print error message and continue
                cout << "Invalid marks! Please enter a value between 0 - 100.\n";
            }
        }

        // add to total
        sum = sum + marks[i];

        // if marks greater than or equal to 50 in all 3 subjects
        isPassed &= (marks[i] >= 50);
        // if marks greater than or equal to 90 in all 3 subjects
        isFirstClass &= (marks[i] >= 90);
    }

    // print results
    cout << "\n"
         << "Your Results\n"
         << setfill('=') << setw(13) << "\n";
    cout << "Username : " << username << "\n"
         << "Student ID : " << studentId << "\n"
         << "Marks :\n";

    for (int i = 0; i < SUBJECT_COUNT; i++)
    {
        cout << "\tSubject #" << (i + 1) << " : " << marks[i] << "\n";
    }

    if (isPassed) // if passed
    {
        cout << "You have passed the exam.\n";
    }
    else // if failed
    {
        cout << "You have failed the exam.\n"
             << "You should repeat all " << SUBJECT_COUNT << " subjects!\n";
    }

    if (isFirstClass) // if first class
    {
        cout << "Congratz! You got first class. :)\n";
    }

    // calculate and print average
    double average = (double)sum / SUBJECT_COUNT;
    cout << "You have the average of " << average << ".\n";

    // print grade
    cout << "You have received the grade of ";
    if (average >= 75)
    {
        cout << "Very Good.";
    }
    else if (average >= 50)
    {
        cout << "Good.";
    }
    else if (average >= 35)
    {
        cout << "Average.";
    }
    else
    {
        cout << "Fail.";
    }
}