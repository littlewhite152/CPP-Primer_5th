#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    while(cin >> s1 >> s2){
        cout << "比较字符大小：" << endl;
        if(s1 != s2){
            cout << "较大者：";
            if(s1 > s2)
                cout << s1 << endl;
            else
                cout << s2 << endl;       
        }
        else 
            cout << "两个字符串相等" << endl;

        cout << "比较字符长度：" << endl;
        if(s1.size() != s2.size()){
            cout << "较长者：";
            if(s1.size() > s2.size())
                cout << s1 << endl;
            else
                cout << s2 << endl;
        }
        else
            cout << "两字符等长" << endl;
    }
}