#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, str;
    cout << "请输入两个字符串:" << endl;
    cin >> s;
    cin >> str;
    string::iterator it1 = s.begin(), it2 = str.begin();
    for(; it1 != s.end(); ++ it1, ++ it2){
        if(*it1 == *it2)
            continue;
        else 
            break;
    }
    if(it1 == s.end())
        cout << s << "是" << str << "的前缀字符串";
    else
        cout << s << "不是" << str << "的前缀字符串";
}