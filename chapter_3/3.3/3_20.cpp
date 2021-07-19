#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int a;
    while(cin >> a){
        v.push_back(a);
    }
    for(auto b : v){
        cout << b << ' ';
    }
    cout << endl << "相邻元素相加之后：" << endl;
    for(decltype(v.size()) i = 1; i < v.size(); i ++){
        cout << v[i] + v[i - 1] << ' ';
    }
    cout << endl << "第i个和第size - 1 - i个元素相加：" << endl;
    for(decltype(v.size()) i = 0; i < v.size() / 2; i ++){
        cout << v[i] + v[v.size() - 1 - i] << ' ';
    }
    if(v.size() % 2 == 1)
        cout << v[v.size() / 2];
}