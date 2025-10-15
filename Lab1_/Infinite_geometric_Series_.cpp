#include <iostream>
using namespace std;
double Infinite_G_Sum(float, float);
int main()
{
    float a, r;
    cout << "First term:";
    cin >> a;
    cout << "common ratio:";
    cin >> r;
    double result = Infinite_G_Sum(a, r);
    if (result != 0)
    {
        cout << "sum =:" << result << endl;
        return 0;
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
        return 0;
    }
}
