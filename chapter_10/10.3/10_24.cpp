#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;
using namespace std::placeholders;
bool fun(const string &s, int sz){
    return sz > s.size();
}
int main(){
    string s = "fjkdd";
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    auto val = find_if(v.begin(), v.end(), bind(fun, s, _1));
    cout << *val << endl;
}
