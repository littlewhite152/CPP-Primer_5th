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
bool fun(const string &s){
    return s.size() >= 5;
}
int main(){
    vector<string> v;
    string s;
    while(cin >> s){
        v.push_back(s);
    }
    partition(v.begin(), v.end(), fun);
    for(int i = 0;i < s.size(); ++ i){
        cout << v[i] << endl;
    }
}