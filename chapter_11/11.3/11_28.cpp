#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    map< string ,vector<int> > m;
    m["a"] = {1, 2, 3};
    m["b"] = {2, 3, 4};
    m["c"] = {5, 3, 4};
    m["d"] = {8, 3, 4};
    auto temp = m.find("c");
    for(auto i : temp->second)
        cout << i << endl;
}