#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    //vector<int> v(10);�������������������10��0��������û��Ԫ��
    vector<int> v;
    while(cin >> a)
        v.push_back(a);
    for(auto it = v.begin(); it != v.end(); it ++){
        cout << *it << ' ';
    }
    cout << endl;
    for(auto it = v.begin(); it != v.end(); it ++){
        *it = (*it) * 2;
    }
    for(auto it = v.begin(); it != v.end(); it ++){
        cout << *it << ' ';
    }
}