#include<bits/stdc++.h> 
using namespace std;
int main()  {
    double mealCost,tip,tax,Total;
    int tipPer,taxPer;
    cin >> mealCost >> tipPer >> taxPer ;
    tip = mealCost*tipPer/100; //1.7425
    tax = mealCost*taxPer/100; //0.5125
    Total = mealCost + tip + tax;
    cout << round(Total);
}
