#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 2, 4, 3};
    cout << ( a[3] > b[3] );
}