#include<iostream>
#include<memory>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    const char* p1 = "abc";
    const char* p2 = "def";
    char* q = new char[6]();
    strcat(q, p1);
    strcat(q, p2);
    unique_ptr<char[]> p(q);
    for(int i = 0; i < 6; ++ i){
        cout << p[i] << endl;
    }


    string s1 = "abc", s2 = "def";
    s1 += s2;
    unique_ptr<string> k(&s1);
    for(int i = 0; i < 6; ++ i)
        cout << s1[i] << endl;
}