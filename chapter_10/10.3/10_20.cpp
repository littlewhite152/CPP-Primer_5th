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
    int cnt = count_if(v.begin(), v.end(), [](const string & s){return s.size() > 4;});
    cout << cnt << endl;
}
