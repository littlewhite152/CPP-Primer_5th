#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    string s;
    // while(cin >> a){
    //     s = (a >= 90 ? "high pass" : a >= 60 ? (a <= 75 ? "low pass" : "pass") : "fail");
    //     cout << s << endl;
    // }
    while(cin >> a){
        if(a >= 90)
            cout << "high pass" << endl;
        else if(a >= 60){
            if(a <= 75)
                cout << "low pass" << endl;
            else
                cout << "pass" << endl;
        }
        else
            cout << "fail" << endl;
    }
}