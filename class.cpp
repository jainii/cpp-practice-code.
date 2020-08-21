#include<bits/stdc++.h>
using namespace std;
class person{
    public:
        int age;
    person(int initAge){
        if(initAge>0)
            age = initAge;
        else{
            cout << "Age is not valid, setting age to 0\n";
            age = 0;
        }
    }

    void amIold(){
        if(age<13)
            cout << " You are young..\n";
        else if(age<18)
            cout << "You are a teenager..\n";
        else if(age>=18)
            cout << "You are old..\n";
    }

    void yearpasses(){
        age++;
    }
};

int main(){
    int t,age;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> age;
        person p(age);
        p.amIold();
        for(int j=0;j<3;j++){
            p.yearpasses();
        }
        p.amIold();
        cout << '\n';
    }
}
