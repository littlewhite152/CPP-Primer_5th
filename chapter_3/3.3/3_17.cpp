#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> v;
    string s;
    while(cin >> s){
        v.push_back(s);
    }
    cout << "ԭ����vector:" << endl;
    for(auto &a : v){
        cout << a << endl;
        for(auto &i : a){//i��a��ҪΪ���ã���Ȼ���ܸı�Ԫ�ص�ֵ
            i = toupper(i);
        }
    }
    cout << "�޸�֮���vector:" << endl;
    for(auto a : v){
        cout << a << endl;
    }
}