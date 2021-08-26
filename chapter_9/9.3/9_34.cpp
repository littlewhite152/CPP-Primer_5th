#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    auto begin = v.begin();
    cout << *begin << endl;
    while(begin != v.end()){
        cout << *begin << endl;
        if(*begin % 2)
            begin = v.insert(begin, *begin);
        ++ begin;
    }
    for(auto i : v){
        cout << i << ' ';
    }
}