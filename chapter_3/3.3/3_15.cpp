#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a;
    vector<string> v;
    while(cin >> a){
        v.push_back(a);
    }
    for(auto b : v){
        cout << b << ' ';
    }
}