#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> iv;
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    while(iter != mid){
        if(*iter != val)
            iv.insert(iter, 2 * val);
        iter = iv.begin(),;
        mid = iv.begin() + iv.size() / 2;
    }
}