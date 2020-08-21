#include<bits/stdc++.h>
using namespace std;
int maxC(int num){
    int count = 0;
    while(num !=0){
        num = (num & (num << 1));
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << maxC(n);
}
