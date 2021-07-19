#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "一次读入一行：" << endl;
    while(getline(cin, s)){
        cout << s << endl;
    }

    cout << "一次读入一个词：" << endl;
    while(cin >> s){
        cout << s << endl;
    }
}