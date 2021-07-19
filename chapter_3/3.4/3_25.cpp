#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(11, 0);
    int a;
    while(cin >> a){
        v[a / 10] ++;
    }
    for(auto it = v.begin();it != v.end(); it ++){
        cout << *it << ' ';
    }
}