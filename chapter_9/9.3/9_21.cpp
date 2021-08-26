#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> v;
    auto it = v.begin();
    string s;
    while(cin >> s){
        it = v.insert(it, s);
    }
    for(auto i : v){
        cout << i << endl;
    }
}