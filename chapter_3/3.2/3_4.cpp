#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    while(cin >> s1 >> s2){
        cout << "�Ƚ��ַ���С��" << endl;
        if(s1 != s2){
            cout << "�ϴ��ߣ�";
            if(s1 > s2)
                cout << s1 << endl;
            else
                cout << s2 << endl;       
        }
        else 
            cout << "�����ַ������" << endl;

        cout << "�Ƚ��ַ����ȣ�" << endl;
        if(s1.size() != s2.size()){
            cout << "�ϳ��ߣ�";
            if(s1.size() > s2.size())
                cout << s1 << endl;
            else
                cout << s2 << endl;
        }
        else
            cout << "���ַ��ȳ�" << endl;
    }
}