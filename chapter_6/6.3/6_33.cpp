#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int a;
    void fun(const vector<int> &v, const int i);
    while(cin >> a){
        v.push_back(a);
    }
    fun(v, 0);
}
void fun(const vector<int> &v, const int i){
    if(i != v.size()){
        cout << v[i];
        fun(v, i + 1);
    }
    else return;
}