#include <iostream>
using namespace std;

double aritmetic_Sum(int a, int d, int n)
{
    double sum = (n / 2) * ((2 * a) + (n - 1) * d);
    return sum;
}
int main()
{
    int a, d, n;

    cout << ("Enter no of terms:");
    cin >> n;

    cout << ("Enter first term:");
    cin >> a;
    cout << ("Enter common difference:");
    cin >> d;
    double result = aritmetic_Sum(a, d, n);
    cout << result;
    return 0;
}