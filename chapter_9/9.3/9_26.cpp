#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 12, 21, 55, 89};
    vector<int> v;
    list<int> l;
    for(auto i : ia){
        v.push_back(i);
        l.push_back(i);
    }
    auto p = v.begin();
    auto q = l.begin();
    while(p != v.end()){
        if(*p % 2 == 1)
            p = v.erase(p);
        else ++ p;
    }
    while(q != l.end()){
        if(*q % 2 == 0)
            q = l.erase(q);
        else ++ q;
    }
    for(auto i : v)
        cout << i << " ";
    cout << endl;
    for(auto i : l)
        cout << i << " ";
    cout << endl;
}