#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
using namespace std;
int main(){
    vector<char> v = {'c', 'q', 'u', 'f', 'q', 'j'};
    string s(v.begin(), v.end());
    cout << s << endl;

}