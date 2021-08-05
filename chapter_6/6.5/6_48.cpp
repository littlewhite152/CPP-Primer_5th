#include<iostream>
#include<cassert>
using namespace std;
int main(){
    string s;
    while(cin >> s && s != "sos"){
        cout << s << endl;
    }
    assert(cin);
}