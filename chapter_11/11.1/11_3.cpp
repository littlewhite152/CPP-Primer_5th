#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int> m;
    string s;
    while(cin >> s){
        auto p = m.find(s);
        if(p != m.end()){
            ++ m[s];
        }
        else
            m[s] = 1;
    }
    for(auto i : m){
        cout << i.first << " 出现了" << i.second << "次" << endl;
    }
}