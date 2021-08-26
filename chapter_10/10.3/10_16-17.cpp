#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
using namespace std;
void fun(vector<string> v, int sz){
    cout << "ԭ�ַ������ݣ�" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;
    
    //�Ȱ����ֵ�������
    sort(v.begin(), v.end());
    cout << "sort֮��" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;

    //��ɾ����ͬ�ĵ���
    auto end_unique = unique(v.begin(), v.end());
    v.erase(end_unique, v.end());
    cout << "ɾ����ͬ�ĵ���֮��:" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;

    //�ٰ��ճ�������
    stable_sort(v.begin(), v.end(), [](const string &a, const string &b){return a.size() < b.size();});
    cout << "stable_sort֮��" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;

    //��¼���ȱ�sz����ַ�������
    auto p = find_if(v.begin(), v.end(), [sz](const string &s){return s.size() > sz;});
    cout << "��" << sz << "����ַ����� " << v.end() - p  << "��:" << endl;
    
    //��ӡ���ȴ���sz���ַ������ÿո����
    for_each(p, v.end(), [](const string &s){cout << s << ' ';});
}
int main(){
    vector<string> v = {"no005", "no009", "no001", "no01", "no005", "no00005", "no00004", "no00005"};
    fun(v,6);
}