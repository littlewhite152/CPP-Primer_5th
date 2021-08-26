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
    cout << "原字符串数据：" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;
    
    //先按照字典序排序
    sort(v.begin(), v.end());
    cout << "sort之后：" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;

    //并删掉相同的单词
    auto end_unique = unique(v.begin(), v.end());
    v.erase(end_unique, v.end());
    cout << "删掉相同的单词之后:" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;

    //再按照长度排序
    stable_sort(v.begin(), v.end(), [](const string &a, const string &b){return a.size() < b.size();});
    cout << "stable_sort之后：" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;

    //记录长度比sz大的字符串个数
    auto p = stable_partition(v.begin(), v.end(), [sz](const string &s){return s.size() >= sz;});
    cout << "partition之后：" << endl;
    for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    cout << endl;
    cout << "比" << sz << "大的字符串有 " << v.end() - p  << "个:" << endl;
    
    //打印长度大于sz的字符串，用空格隔开
    for_each(v.begin(), p, [](const string &s){cout << s << ' ';});
}
int main(){
    vector<string> v = {"no005", "no09", "no001", "no01", "no005", "no00005", "no00004", "no00005"};
    fun(v,5);

    // int sz = 4;
    // auto p = partition(v.begin(), v.end(), [sz](const string &s){return s.size() > sz;});
    // cout << "partition之后" << endl;
    // for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    // cout << endl;

    // stable_sort(v.begin(), p, [](const string &a, const string &b){return a.size() < b.size();});
    // stable_sort(p, v.end(), [](const string &a, const string &b){return a.size() < b.size();});
    // cout << "调整partition之后的分区" << endl;
    // for_each(v.begin(), v.end(), [](const string &s){cout << s << ' ';});
    // cout << endl;
}