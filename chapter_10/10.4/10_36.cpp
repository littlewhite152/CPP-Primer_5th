#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    list<int> v = {1, 2, 3, 4, 5, 0, 6, 0, 7};
    auto p = find(v.rbegin(), v.rend(), 0);
    p ++;
    int index = 1;
    for(auto q = v.cbegin(); q != p.base(); ++ q,++ index){
    }
    if(index == v.size())
        cout << "δ�ҵ�" << endl;
    else
        cout << "�ҵ��ˣ��ڵ�" << index << "��λ��" << endl;
}