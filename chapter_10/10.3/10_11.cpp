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
void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto unique_end = unique(words.begin(), words.end());
    words.erase(unique_end, words.end());
}
bool isshorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}
int main(){
    vector<string> v = {"fox", "jumps", "over", "quick", "red", "slow", "the", "turtle"};
    elimDups(v);
    // sort(v.begin(), v.end(), isshorter);
    // for(auto s : v){
    //     cout << s << endl;
    // }
    stable_sort(v.begin(), v.end(), isshorter);
    for(auto s : v){
        cout << s << endl;
    }
}