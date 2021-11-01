#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    map<int, string>::iterator it = m.begin();
    it->second = "hello";
}