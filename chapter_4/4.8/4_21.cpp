#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i;
    vector<int> v;
    while(cin >> i){
        v.push_back(i);
    }
    for(auto &i : v)
        i % 2 == 1 ? i = i * 2 : i;
    for(auto i : v)
        cout << i << ' ';
}