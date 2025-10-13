#include <iostream>
#include <cmath>
using namespace std;

double geometric_Sum (int a,int r,int n){
double sum=a* (pow(r,n) - 1)/(r-1) ;
return sum;}
int main(){
    int a,r ,n;
    
    cout<<("Enter no of terms:");
    cin >> n;
    cout<<("Enter first term:");
    cin >> a;
    cout<<("Enter common ratio:");
    cin >> r;
    double result = geometric_Sum ( a, r, n);
    cout<<result;
    
    return 0;
}


    
