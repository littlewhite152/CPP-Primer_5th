#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, str;
    cout << "�����������ַ���:" << endl;
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
        cout << s << "��" << str << "��ǰ׺�ַ���";
    else
        cout << s << "����" << str << "��ǰ׺�ַ���";
}