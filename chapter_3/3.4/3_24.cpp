#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    vector<int> v;
    while(cin >> a){
        v.push_back(a);
    }
    for(auto it = v.begin(); it != v.end() - 1; it ++){//��������ָ���������ʱ���������Ϊ�յ����
        cout << *it + *(it + 1) << ' ';
    }
    cout << endl;
    for(auto it1 = v.begin(), it2 = v.end() - 1; it1 < it2; it1 ++, it2 --){//��Ϊendָ�����vector���һ��Ԫ�ص���һ��λ�ã�����Ҫ-1
        cout << *it1 + *it2 << ' ';
    }
    if(v.size() % 2 == 1){
        auto mid = v.begin() + (v.end() - v.begin()) / 2;
        cout << *mid;
    }
}