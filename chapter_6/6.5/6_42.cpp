#include<iostream>
using namespace std;
int main(){
    string make_plusral(size_t ctr, const string &word, const string ending = "s");
    string s;
    int ctr;
    while(cin >> s){
        cout << "请输入计数器(>1输出单词的复数形式，否则输出单数形式)" << endl;
        cin >> ctr;
        cout << make_plusral(ctr, s) << endl;
    }
}
string make_plusral(size_t ctr, const string &word, const string ending = "s"){
    return ctr > 1 ? word + ending : word;
}