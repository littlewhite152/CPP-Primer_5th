#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    vector<string> v;
    string s;
    while(cin >> s){
        v.push_back(s);
    }

    sort(v.begin(), v.end());
    cout << "sort之后：" << endl;
    for(auto i : v){
        cout << i << ' ';
    }

    auto end_unique = unique(v.begin(), v.end());
    cout << "unique之后：" << endl;
    for(auto i : v){
        cout << i << ' ';
    }

    v.erase(end_unique, v.end());
    cout << "erase之后：" << endl;
    for(auto i : v){
        cout << i << ' ';
    }
}