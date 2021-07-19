#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(getline(cin , s)){
        for(char &a : s){
            a = 'X';
        }
        cout << s << endl;
    }
}