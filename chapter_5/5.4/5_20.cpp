#include<iostream>
#include<string>
using namespace std;
int main(){
    bool b1 = true;
    string prestr, curstr;
    while(cin >> curstr){
        if(!isupper(curstr[0]))
            continue;
        if(curstr == prestr){
            b1 = false;
            cout << "�����ظ����ֵĵ����ǣ�" << curstr;
            break;
        }
        else
            prestr = curstr;
    }
    if(b1)
        cout << "û�г��������ظ����ֵĵ���";
}