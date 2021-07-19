#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> v;
    string s;
    while(cin >> s){
        v.push_back(s);
    }
    cout << "原来的vector:" << endl;
    for(auto &a : v){
        cout << a << endl;
        for(auto &i : a){//i和a都要为引用，不然不能改变元素的值
            i = toupper(i);
        }
    }
    cout << "修改之后的vector:" << endl;
    for(auto a : v){
        cout << a << endl;
    }
}