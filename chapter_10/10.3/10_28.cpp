#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l;
    copy(v.begin(), v.end(), back_inserter(l));
    for(auto val : l){
        cout << val << ' ';
    }
    l.clear();
    cout << endl;

    copy(v.begin(), v.end(), front_inserter(l));
    for(auto val : l){
        cout << val << ' ';
    }
    l.clear();
    cout << endl;

    copy(v.begin(), v.end(), inserter(l, l.begin()));   
    for(auto val : l){
        cout << val << ' ';
    }
    l.clear();
}