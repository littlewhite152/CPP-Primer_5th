#include<iostream>
#include<forward_list>
#include<string>
using namespace std;
int main(){
    int fun(forward_list<string> &fl, string s, string d);
    forward_list<string> fl = {"chong", "qing", "da", "xue"};
    for(auto i : fl)
        cout << i << " ";
    cout << endl;
    fun(fl, "da", "xiao");
    for(auto i : fl)
        cout << i << " ";
    cout << endl;
    fun(fl, "hao", "hao");
    for(auto i : fl)
        cout << i << " ";
    cout << endl;
}
int fun(forward_list<string> &fl, string s, string d){
    auto pre = fl.before_begin();
    auto cur = fl.begin();
    while(cur != fl.end()){
        if(*cur == s){
            cur = fl.insert_after(cur, d);
            return 1;
        }
        ++ pre;
        ++ cur;
    }
    if(cur == fl.end()){
        fl.insert_after(pre, d);
        return 0;
    }
}