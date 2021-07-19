#include<iostream>
using namespace std;
int main(){
    int a[3] = {2, 6, 5};
    for(auto p = a; p != end(a); p ++)
        *p = 0;
    for(auto i : a)
        cout << i << ' ';
}