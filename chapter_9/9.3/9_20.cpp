#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(){
    list<int> l;
    deque<int> d1;
    deque<int> d2;
    int s;
    while(cin >> s){
        l.push_back(s);
    }
    for(list<int>::const_iterator p = l.cbegin(); p != l.end(); ++ p){
        if(*p % 2 == 0)
            d1.push_back(*p);
        else
            d2.push_back(*p);
    }
    for(auto i : d1){
        cout << i << ' ';
    }
    cout << endl;
    for(auto i : d2){
        cout << i << ' ';
    }
}