#include<iostream>
#include<vector>
using namespace std;
template<typename t>
void print(t &v){
    for(typename t::size_type i = 0; i < v.size(); ++ i){
        cout << v[i] << ' ';
    }
    cout << endl;
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    print(v);
}