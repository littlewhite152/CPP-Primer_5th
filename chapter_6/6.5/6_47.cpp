#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<string> v;
    string a;
    void fun(const vector<string> &v, const int i);
    while(cin >> a){
        v.push_back(a);
    }
    fun(v, 0);
}
void fun(const vector<string> &v, const int i){
    unsigned sz = v.size();
    #ifndef NDEBUG
    cout << "vector对象的大小是" << sz << endl;
    #endif
    if(!v.empty() && i != v.size()){
        cout << v[i] << endl;
        fun(v, i + 1);
    }
}