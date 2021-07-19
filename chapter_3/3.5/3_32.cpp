#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[10];
    vector<int> v;
    for(int i = 0;i < 10;i ++)
        a[i] = i;
    for(auto i : a)
        v.push_back(i);
    for(auto i : v)
        cout << i << ' ';
}