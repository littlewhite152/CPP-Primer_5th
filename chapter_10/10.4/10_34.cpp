#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::reverse_iterator p = v.rbegin();
    while(p != v.rend()){
        cout << *p << endl;
        ++ p;
    }
}