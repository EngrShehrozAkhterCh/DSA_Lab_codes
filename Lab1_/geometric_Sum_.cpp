#include <iostream>
#include <cmath>
using namespace std;
double GM_sum(float a, float r, int n);

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

    double result = GM_sum(a, r, n);
    cout << "sum is " << result << endl;
    return 0;
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
