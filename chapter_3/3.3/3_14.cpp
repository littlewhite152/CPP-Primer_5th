#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    vector<int> v;
    while(cin >> a){
        v.push_back(a);
    }
    for(auto b : v){
        cout << b << ' ';
    }
}