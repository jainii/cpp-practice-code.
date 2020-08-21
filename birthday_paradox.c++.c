#include<iostream>
#include<cmath>
using namespace std;

int findd(double p)
{
    return ceil(sqrt(2*365*log(1/1-p)));
}

int main()
{
    cout<< findd(0.5);
}
