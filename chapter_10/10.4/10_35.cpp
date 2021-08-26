#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    auto p = v.end();
    -- p;
    while(p != v.begin() - 1){
        cout << *p << endl;
        -- p;
    }
}