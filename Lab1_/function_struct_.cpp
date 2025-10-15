#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct Z
{
    double X;
    double Y;
};
Z struct_Function_(float a, float r, int n);
double GM_sum(float a, float r, int n);
double Infinite_G_Sum(float, float);
int main()
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
    return 0;
}
Z struct_Function_(float a, float r, int n)
{
     Z temp;  // Create structure variable
    temp.X = GM_sum(a, r, n);         // Finite geometric series
    temp.Y = Infinite_G_Sum(a, r);    // Infinite geometric series
    return temp;
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
