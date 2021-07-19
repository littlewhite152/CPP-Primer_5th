#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(10, 2);
    int a[10];
    auto it = v.cbegin();
    for(int i = 0; it != v.cend(); it ++,i ++){
        a[i] = *it;
    }
    for(auto i : a)
        cout << i;
}