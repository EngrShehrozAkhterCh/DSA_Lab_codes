#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int mathMarks;
    int phyMarks;
    int cheMarks;
};

int main()
{

    int x;
    cout << "Enter  students: ";
    cin >> x;

    Student st[100]; // array of students

    for (int i = 0; i < x; i++)
    {
        cout << "\nEnter data student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> st[i].name;
        cout << "Math Marks: ";
        cin >> st[i].mathMarks;
        cout << "Physics Marks: ";
        cin >> st[i].phyMarks;
        cout << "Chemistry Marks: ";
        cin >> st[i].cheMarks;
    }

    cout << "\n            Student Data         \n";
    for (int i = 0; i < x; i++)
    {
        cout << "Name: " << st[i].name << endl;
        cout << "Math: " << st[i].mathMarks << endl;
        cout << "Physics: " << st[i].phyMarks << endl;
        cout << "Chemistry: " << st[i].cheMarks << endl;
        cout << endl;
    }

    return 0;
}