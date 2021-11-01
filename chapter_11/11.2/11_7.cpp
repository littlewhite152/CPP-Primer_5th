#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    string xing,ming;
    map< string, vector<string> > m;
    cout << "ÇëÊäÈëÐÕÊÏ£º" << endl;
    while(cin >> xing){
        cout << "ÇëÊäÈëÃû×Ö:(end½áÊø)" << endl;
        while(cin >> ming){
            if(ming == "end")
                break;
            m[xing].push_back(ming);
        }
        cout << "ÇëÊäÈëÐÂµÄÐÕÊÏ" << endl;
    }
    for(auto i : m){
        cout << i.first << endl;
        for(auto j : i.second){
            cout << j <<' ';
        }
        cout << endl;
    }
}