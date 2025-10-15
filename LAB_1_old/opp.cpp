#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class person
{
private:
    string name;
    string cnic;
    int age;

public:
    void setname(string n)
    {
        name = n;
    }

    void setcnic(string c)
    {
        cnic = c;
    }

    void setage()
    {
        int a;
        cout << "Enter a age of Person :";

        bool flag = true;
        while (flag)
        {
            cin >> a;
            age = a;
            if (age <= 100 && age >= 1)
            {
                flag = false;
            }
            else
                cout << "Invalid! Again enter a age ";
        }
    }

    string getname()
    {
        return name;
    }

    string getcnic()
    {
        return cnic;
    }

    int getage()
    {
        return age;
    }

    person get_info(person s)
    {
        cout << "Name of Person " << s.name << endl;
        cout << "CNIC of Person " << s.cnic << endl;
        cout << "Age of Person  " << s.age << endl;
    }
};

int main()
{
    person p;
    p.setname("hamza");
    p.setage();
    p.setcnic("36748-23456-2345");
    p.get_info(p);
    return 0;
}