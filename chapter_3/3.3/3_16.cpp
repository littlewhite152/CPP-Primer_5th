#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{10, 11};
    cout << "v��" << v.size() << "��Ԫ��,�ֱ���";
    for(auto a : v){
        cout << a << ' ';
    }
}