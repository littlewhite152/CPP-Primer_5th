#include<iostream>
#include<vector>
using namespace std;
int main(){
    int index = 0;
    int i, j;
    int (*fun)(int i, int j);
    vector<decltype(fun)> v;
    while(cin >> i >> j){
        v.push_back(fun);
        cout << v[index ++];
    }
}
int fun(int i, int j){
    return i + j;
}