#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<forward_list>
#include<array>
#include<string>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b(10);
    vector<int> c{1, 2, 3};
    vector<int> d(c);
    vector<int> e = {2, 3, 4};\
    vector<int>::iterator i = e.begin();
    vector<int>::iterator j = e.end();
    vector<int> f(i, j);
}