#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
using namespace std;
string &fun(string &name, string &prestr, string &aftstr){
    name.insert(name.begin(), prestr.begin(), prestr.end());
    name.insert(name.end(), aftstr.begin(), aftstr.end());
    return name;
}
int main(){
    string name("jeff"), prestr("Mr."), atfstr("III");
    fun(name, prestr, atfstr);
    cout << name << endl;
}