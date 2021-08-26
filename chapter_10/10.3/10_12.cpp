#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
#include"Sales_data.h"
using namespace std;
bool isshorter(const Sales_data &s1, const Sales_data &s2){
    return s1.isbn().size() < s2.isbn().size();
}
bool issmall(const Sales_data &s1, const Sales_data &s2){
    return s1.isbn() < s2.isbn();
}
void compareIsbn(vector<Sales_data> &v){
    sort(v.begin(),v.end(),issmall);
    stable_sort(v.begin(), v.end(), isshorter);
}
int main(){
    vector<Sales_data> v;
    for(int i = 0;i < 10;++ i){

        string s;
        cin >> s;
        v.push_back({s});
    }
    compareIsbn(v);
    for(auto i : v){
        cout << i.isbn() << endl;
    }
}