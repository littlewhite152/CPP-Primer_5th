#include<iostream>
using namespace std;
int main(){
    string make_plusral(size_t ctr, const string &word, const string ending = "s");
    string s;
    int ctr;
    while(cin >> s){
        cout << "�����������(>1������ʵĸ�����ʽ���������������ʽ)" << endl;
        cin >> ctr;
        cout << make_plusral(ctr, s) << endl;
    }
}
string make_plusral(size_t ctr, const string &word, const string ending = "s"){
    return ctr > 1 ? word + ending : word;
}