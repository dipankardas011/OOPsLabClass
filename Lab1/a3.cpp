/*
+-----------------------+
| Dipankar Das 20051554 |
+-----------------------+
WAP in C++ to input name, roll number and marks in 5 subjects for n number of students. Write functions to:-
    * Find total marks and percentage of all n students.
    * Display details of a student with a given roll number.
    * Display the details for all the students having percentage in a given range.
    * Sort the array in ascending order of marks.*/
#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

#define SUBS 5

struct Classroom
{
    string name;
    int roll;
    int marks[SUBS];

    int total;
    float percent;
};

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    Classroom c[n];
    for (int i = 0; i < n; i++)
    {
        // entering of details
        cout << "enter details for student " << (i + 1) << endl;
        cin >> std::ws;
        string x;
        getline(cin, x);

        c[i].name = x;
        cin >> std::ws;
        cin >> c[i].roll;
        c[i].total = 0;
        // in the same line
        for (int j = 0; j < SUBS; j++)
        {
            int k;
            cin >> k;
            c[i].total += k;
            c[i].marks[j] = k;
        }
        std::sort(c[i].marks, c[i].marks + SUBS);
        c[i].percent = (float)c[i].total / SUBS;
    }

    for (int i = 0; i < n; i++)
    {
        if (c[i].percent >= 90)
        {
            cout << "#Grade: O\n";
        }
        else if (c[i].percent < 90 && c[i].percent >= 70)
        {
            cout << "#Grade: E\n";
        }
        else if (c[i].percent < 70 && c[i].percent >= 40)
        {
            cout << "#Passed\n";
        }
        else
        {
            cout << "#Failed\n";
        }
        cout << "Student " << (i + 1) << endl;
        cout << "\tName: " << c[i].name << endl;
        cout << "\tRoll: " << c[i].roll << endl;
        cout << "\t";
        for (int j = 0; j < SUBS; j++)
        {
            cout << c[i].marks[j] << " ";
        }
        cout << "\n\tTotal: " << c[i].total << endl;
        cout << "\tPercent " << c[i].percent << " %" << endl;
    }
    remove(argv[0]);
    return 0;
}
