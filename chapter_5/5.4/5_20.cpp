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
            cout << "连续重复出现的单词是：" << curstr;
            break;
        }
        else
            prestr = curstr;
    }
    if(b1)
        cout << "没有出现连续重复出现的单词";
}