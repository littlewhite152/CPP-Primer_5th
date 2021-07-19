#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{10, 11};
    cout << "v有" << v.size() << "个元素,分别是";
    for(auto a : v){
        cout << a << ' ';
    }
}