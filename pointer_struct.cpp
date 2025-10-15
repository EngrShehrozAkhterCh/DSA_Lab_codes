#include <iostream>
using namespace std;
struct student
{
    string Name;
    int Math;
    int chemi;
    int physics;
};
void input_students(student *pointer_array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        pointer_array[i] = new student;
    }
    for (int i = 0; i < n; i++)
    {
        // cout << "enter data of student" << i + 1 << ":" << endl;
        cout << "Name:" << i + 1 << " ";
        cin >> pointer_array[i]->Name;
        cout << "[" << i + 1 << ".1]" << pointer_array[i]->Name << " - Math:";
        cin >> pointer_array[i]->Math;
        cout << "[" << i + 1 << ".2]" << pointer_array[i]->Name << " - chemistry:";
        cin >> pointer_array[i]->chemi;
        cout << "[" << i + 1 << ".3]" << pointer_array[i]->Name << " - physics:";
        cin >> pointer_array[i]->physics;
    }
}
void sort(student *pointer_array[], int n)
{
    student *temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (pointer_array[j]->Name > pointer_array[j + 1]->Name)
            {
                temp = pointer_array[j];
                pointer_array[j] = pointer_array[j + 1];
                pointer_array[j + 1] = temp;
            }
        }
    }
}
void print_list(student *pointer_array[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "[" << i + 1 << "]" << pointer_array[i]->Name << ":" << "Math" << "(" << pointer_array[i]->Math << ")" << "-"
                                                                                                                          "Chemistry"
             << "-" << "(" << pointer_array[i]->chemi << ")" << "-" << "physics"
                                                                       "("
             << pointer_array[i]->physics << ")" << endl;
    }
}
int main()
{
    const int n = 3;
    student *pointer_array[n];
    input_students(pointer_array, n);
    cout << "\nUnsorted Mark Sheet for Spring 2021:\n"
         << endl;
    print_list(pointer_array, n);
    sort(pointer_array, n);
    cout << "\nSorted Mark Sheet for Spring 2021:\n"
         << endl;
    print_list(pointer_array, n);
    return 0;
}