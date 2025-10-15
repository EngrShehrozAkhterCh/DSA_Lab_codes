#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct student
{
    string Name;
    int Math;
    int chem;
    int phy;
};
float calculate_average(student arry[], int n);
void bubble_sort(student arry[], int n);
int main()
{
    const int n = 2;
    student students[n];

    cout << "enter students data:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "enter Data of student" << i + 1 << ":" << endl;
        cout << "Name:" << endl;

        cin >> students[i].Name;
        cout << "math marks:" << endl;
        cin >> students[i].Math;
        cout << "phy marks:" << endl;
        cin >> students[i].phy;
        cout << "chem marks:" << endl;
        cin >> students[i].chem;
    }
    calculate_average(students, n);

    bubble_sort(students, n);

    return 0;
}
float calculate_average(student arry[], int n)
{
    float avermath, avaPhy, avaChe;
    float Phy_total = 0;
    float mathtotal = 0;
    float chem_total = 0;
    for (int i = 0; i < n; i++)
    {
        mathtotal += arry[i].Math;
        Phy_total += arry[i].phy;
        chem_total += arry[i].chem;
    }
    avermath = mathtotal / n;
    cout << "average of math marks is:" << endl;
    cout << avermath << endl;
    avaPhy = Phy_total / n;
    cout << "average of physics marks is:" << endl;
    cout << avaPhy << endl;
    avaChe = chem_total / n;
    cout << "average of chemistry marks is:" << endl;
    cout << avaChe << endl;
}
void bubble_sort(student arry[], int n)
{
    cout << "\nbefore list was sorted by name:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arry[i].Name << " " << arry[i].Math << " " << arry[i].phy << " " << arry[i].chem << endl;
    }
    student temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arry[j].Name > arry[j + 1].Name)
            {
                temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted list by name:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arry[i].Name << " " << arry[i].Math << " " << arry[i].phy << " " << arry[i].chem << endl;
    }
}