#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, sum;
    while (cin >> s){
        if(sum.size() == 0)
            sum = s;
        else
            sum += s + ' ';
    }
    cout << sum << endl;
}