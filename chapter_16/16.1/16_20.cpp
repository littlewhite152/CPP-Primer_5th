#include<iostream>
#include<vector>
using namespace std;
template<typename t>
void print(t &v, typename t::iterator start, typename t::iterator end){
    while(start != end){
        cout << *start << ' ';
        start ++;
    }
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    print(v, v.begin(), v.end());
}