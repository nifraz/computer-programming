#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	cout << "Enter the username: ";
	string username;
	cin >> username;

    cout << "Enter the student ID: ";
	int student_id;
	cin >> student_id;

    int marks[3];
    int sum = 0;
    bool first_class = true;
    bool fail = false;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the subject#" << (i + 1) << " marks: ";
        cin >> marks[i];
        sum = sum + marks[i];

        first_class = first_class && (marks[i] >= 90);

        if (marks[i] < 50)
        {
            fail = true;
        }
    }
    
    if (fail)
    {
        cout << "You have failed the exam. You need to do repeat." << endl;
    }
    else{
        cout << "You have passed the exam." << endl;
    }

    double average = sum / 3;
    cout << "Your grade is ";
    if (average >= 75)
    {
        cout << "Very Good." << endl;
    }
    else if (average >= 50)
    {
        cout << "Good." << endl;
    }
    else if (average >= 35)
    {
        cout << "Average." << endl;
    }
    else
    {
        cout << "Fail." << endl;
    }
    
    if (first_class)
    {
        cout << "You have got first class." << endl;
    }
    
}