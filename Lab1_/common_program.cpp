#include <iostream>

#include <string>
#include <cmath>
using namespace std;
struct Z
{
    double X;
    double Y;
};
Z struct_Function_(float a, float r, int n);
double aritmetic_Sum(int a, int d, int n);
double Infinite_G_Sum(float, float);
double GM_sum(float a, float r, int n);
int main()
{
    cout << "choose from these options:" << endl;
    cout << "1 for aritmetic sum{press 1} :" << endl;
    cout << "2 for geometric sum{press 2}  :" << endl;
    cout << "3 for infinite geometric sum{press 3}  :" << endl;
    cout << "4 for Structure Function (Z = {X, Y})sum{press 4}  :" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int a, d, n;

        cout << ("Enter no of terms:");
        cin >> n;

        cout << ("Enter first term:");
        cin >> a;
        cout << ("Enter common difference:");
        cin >> d;
        double result = aritmetic_Sum(a, d, n);
        cout << "aritmatic sum is:" << result;
        cout << "program finished / Restart again!" << endl;
        break;
    }
    case 2:
    {
        int n;
        float a, r;
        cout << ("Enter no of terms:");
        cin >> n;
        cout << ("Enter first term:");
        cin >> a;
        cout << ("Enter common ratio:");
        cin >> r;
        double result = GM_sum(a, r, n);
        cout << "Geometric sum is " << result << endl;
        cout << "program finished / Restart again!" << endl;
        break;
    }
    case 3:
    {
        float a, r;
        cout << "First term:";
        cin >> a;
        cout << "common ratio:";
        cin >> r;
        double result = Infinite_G_Sum(a, r);

        cout << "Infinite_G_Sum  =:" << result << endl;
        cout << "program finished / Restart again!" << endl;
        break;
    }
    case 4:
    {
        int n;
        float a, r;
        cout << ("Enter no of terms:");
        cin >> n;
        cout << ("Enter first term:");
        cin >> a;
        cout << ("Enter common ratio:");
        cin >> r;
        Z result = struct_Function_(a, r, n);
        cout << "gm sum is:" << result.X << endl;
        cout << "infinite gm sum is:" << result.Y << endl;
        cout << "program finished / Restart again!" << endl;
        break;
    }
    default:
        cout << "Invalid choice!{choose from 1 to 4}" << endl;

        return 0;
    }
}
double aritmetic_Sum(int a, int d, int n)
{
    double sum = (n / 2) * ((2 * a) + (n - 1) * d);
    return sum;
}
double GM_sum(float a, float r, int n)
{
    if (r > 1)
    {
        double sum = a * (pow(r, n) - 1) / (r - 1);
        return sum;
    }
    else if (r < 1)
    {
        double sum = a * (1 - pow(r, n)) / (1 - r);
        return sum;
    }
    else if (r == 0)
    {
        double sum = a;
        return sum;
    }
    else
    {
        double sum = a * n;
        return sum;
    }
}
double Infinite_G_Sum(float a, float r)
{

    double sum;
    if (r > 1)
    {
        sum = a / (r - 1);
        return sum;
    }
    else if (r < 1 && r != 0)
    {
        sum = a / (1 - r);
        return sum;
    }
    else
    {
        cout << "ratio should not be 1 or 0!" << endl;
        return -1;
    }
}
Z struct_Function_(float a, float r, int n)
{
    Z temp;                        
    temp.X = GM_sum(a, r, n);      
    temp.Y = Infinite_G_Sum(a, r); 
    return temp;
}
