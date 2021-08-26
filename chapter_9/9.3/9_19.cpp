#include<iostream>
#include<string>
#include<list>
using namespace std;
int main(){
    list<string> l;
    string s;
    while(cin >> s){
        l.push_back(s);
    }
    for(list<string>::iterator p = l.begin(); p != l.end(); ++p){
        cout << *p << endl;
    }
}