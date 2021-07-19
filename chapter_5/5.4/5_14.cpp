#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    vector<string> v;
    while(cin >> s){
        v.push_back(s);
    }
    auto it = v.begin();
    int cnt = 1;
    int maxcnt = 1;
    while(it != v.end()){
        if(*it != *it++){
            maxcnt = maxcnt > cnt ? maxcnt : cnt;
            cnt = 1;
            continue;
        }
        else{
            cnt ++;
        }
    }
    cout << maxcnt << endl;
}