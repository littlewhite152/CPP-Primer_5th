#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    auto begin = v.begin();
    cout << *begin << endl;
    while(begin != v.end()){
        ++ begin;
        // cout << "--------" << endl;
        // cout << *begin << endl;
        // cout << "--------" << endl;
        v.insert(begin, 9);//不赋值给begin的话，begin迭代器就失效了
        ++ begin;
    }
    for(auto i : v){
        cout << i << ' ';
    }
}