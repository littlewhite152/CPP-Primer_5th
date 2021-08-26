#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
using namespace std;
void fun(string &s, string oldVal, string newVal){
    for(auto p = s.begin(); p != s.end(); ++ p){
        if(*p == *oldVal.begin()){
            auto start = p;
            auto q = oldVal.begin();
            while(q != oldVal.end()){
                if(*start == *q){
                    ++ start;
                    q ++;
                }
                else
                    break;
            }
            if(*q == *oldVal.end()){
                s.replace(p, p + oldVal.size(), newVal.begin(), newVal.end());
                p = p + newVal.size();
            }
        }
    }
}
int main(){
    string str("asdgghjkl"), s1 = "ggh", s2 = "love";
    fun(str, s1, s2);
    cout << str;
}