#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int val;
    while(cin >> val){
        v.push_back(val);
    }
    vector<int>::iterator p1 = v.begin() + 1;
    vector<int>::iterator p2 = v.end();
    cout << *p1 << endl;
    // v.erase(p1, p1);
    // v.erase(p1, p2);
    v.erase(p2, p2);
    for(auto i : v){
        cout << i << " ";
    }
}