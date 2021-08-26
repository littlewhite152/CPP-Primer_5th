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
int main(){
    list<int> l = {1, 2, 3, 4, 5, 6};
    fill_n(l.begin(), l.size(), 0);
    for(auto i : l){
        cout << i << ' ';
    }
}