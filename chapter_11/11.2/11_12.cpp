#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    int val;
    vector<pair<string, int>> v;
    while(cin >> s >> val){
        v.push_back(make_pair(s,val));
    }
    for(auto i : v){
        cout << i.first << ' ' << i.second << endl;
    }
}