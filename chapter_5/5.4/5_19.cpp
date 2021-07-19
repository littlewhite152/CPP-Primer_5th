#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    cout << "ÇëÊäÈëÁ½¸ö×Ö·û´®:" << endl;
    cin >> s1 >> s2;
    do{
        cout << (s1.size() > s2.size() ? s2 : s1) << endl;
    }while(cin >> s1 >> s2);
}