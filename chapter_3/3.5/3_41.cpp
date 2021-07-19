#include<iostream>
#include<vector>
using namespace std;
int main(){
    char a[5] = {1,2,3,4,5};
    vector<int> b(begin(a), end(a));
    for(auto i : a)
        cout << i;
}