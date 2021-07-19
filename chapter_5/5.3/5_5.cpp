#include<iostream>
using namespace std;
int main(){
    int grade;
    string s;
    while(cin >> grade){
        if(grade < 60)
            s = "E";
        else if(grade != 100){
            s = 'E' - ( grade - 50 ) / 10;
            if(grade % 10 > 7)
                s += '+';
            else if(grade % 10 < 3)
                s += '-';
        }
        else
            s = "S";
        cout << s << endl;
    }
}