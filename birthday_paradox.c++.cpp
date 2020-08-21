#include<iostream>
#include<cmath>
using namespace std;
double finde(double p)
{
    return ceil(sqrt(2*365*log(1/(1-p))));
}
int main()
{
    cout<< finde(0.5);
}
