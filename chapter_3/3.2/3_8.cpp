#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(getline(cin , s)){
        decltype(s.size()) index = 0;
        while(index < s.size()){
            s[index ++] = 'X';                        
        }
        cout << s << endl;
    } 
}   