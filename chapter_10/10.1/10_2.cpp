#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    string str;
    list<string> l = {"chong", "qing", "da", "da", "xue", "chong"};
    cout << "��������Ҫ���ҵ�ֵ��" << endl;
    cin >> str;
    cout << count(l.begin(), l.end(), str);
}