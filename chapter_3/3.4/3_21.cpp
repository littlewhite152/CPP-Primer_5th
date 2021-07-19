#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{10, 42};
    vector<int>::const_iterator it;
    for(it = v.cbegin(); it != v.cend(); it ++){
        cout << *it << ' ';
    }
}