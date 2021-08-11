#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
    vector<int> a = {1, 2, 3};
    list<int> b = {2, 3, 4};
    vector<double> c(b.begin(), b.end());
    vector<double> d(a.begin(), a.end());
}