#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main(){
    deque<string> d;
    string s;
    while(cin >> s){
        d.push_back(s);
    }
    for(deque<string>::iterator p = d.begin(); p != d.end(); ++p){
        cout << *p << endl;
    }
}