#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;
int main(){
    list<string> v;
    string s;
    ostream_iterator<string> out(cout, " ");
    while(cin >> s){
        v.push_back(s);
    }

    v.sort();
    cout << "sort֮��" << endl;
    copy(v.begin(), v.end(), out);

    v.unique();
    cout << "unique֮��" << endl;
    copy(v.begin(), v.end(), out);

    // v.erase(end_unique, v.end());
    // cout << "erase֮��" << endl;
    // for(auto i : v){
    //     cout << i << ' ';
    // }
}