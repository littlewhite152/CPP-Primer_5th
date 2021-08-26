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
    auto p = stable_partition(v.begin(), v.end(), [sz](const string &s){return s.size() >= sz;});
    cout << "partition֮��" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;
    cout << "��" << sz << "����ַ����� " << v.end() - p  << "��:" << endl;
    
    //��ӡ���ȴ���sz���ַ������ÿո����
    for_each(v.begin(), p, [](const string &s){cout << s << ' ';});
}
int main(){
    vector<string> v = {"no005", "no09", "no001", "no01", "no005", "no00005", "no00004", "no00005"};
    fun(v,5);

    // int sz = 4;
    // auto p = partition(v.begin(), v.end(), [sz](const string &s){return s.size() > sz;});
    // cout << "partition֮��" << endl;
    // for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    // cout << endl;

    // stable_sort(v.begin(), p, [](const string &a, const string &b){return a.size() < b.size();});
    // stable_sort(p, v.end(), [](const string &a, const string &b){return a.size() < b.size();});
    // cout << "����partition֮��ķ���" << endl;
    // for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    // cout << endl;
}