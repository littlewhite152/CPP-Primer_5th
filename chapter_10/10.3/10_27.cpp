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
    vector<string> v = {"no005", "no09", "no001", "no01", "no005", "no00005", "no00004", "no00005"};
    list<string> l;
    sort(v.begin(), v.end());
    for(auto s : v){
        cout << s << ' ';
    }
    cout << endl;
    unique_copy(v.begin(), v.end(), back_inserter(l));
    for(auto s : l){
        cout << s << ' ';
    }
}