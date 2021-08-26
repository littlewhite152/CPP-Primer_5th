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
    return s.size() <= sz;
}
int main(){
    vector<string> v = {"no005", "no09", "no001", "no01", "no005", "no00005", "no00004", "no00005"};
    int cnt = count_if(v.begin(), v.end(), bind(fun, _1, 4));
    cout << cnt << endl;
}
