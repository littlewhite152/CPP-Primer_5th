#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "һ�ζ���һ�У�" << endl;
    while(getline(cin, s)){
        cout << s << endl;
    }

    cout << "һ�ζ���һ���ʣ�" << endl;
    while(cin >> s){
        cout << s << endl;
    }
}