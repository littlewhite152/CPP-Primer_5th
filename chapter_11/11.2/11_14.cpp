#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    string xing,ming,birth;
    map< string, vector<pair<string, string>> > m;
    cout << "���������ϣ�" << endl;
    while(cin >> xing){
        cout << "����������:(end����)" << endl;
        while(cin >> ming >> birth){
            if(ming == "end")
                break;
            m[xing].push_back( {ming, birth} );
        }
        cout << "�������µ�����" << endl;
    }
    for(auto i : m){
        cout << i.first << endl;
        for(auto j : i.second){
            cout << j.first <<' ' << j.second << ';';
        }
        cout << endl;
    }
}