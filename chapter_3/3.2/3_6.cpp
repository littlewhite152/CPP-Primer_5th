#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(getline(cin , s)){
        for(auto &a : s){
            a = 'X';
        }
        cout << s << endl;
    } 
}   