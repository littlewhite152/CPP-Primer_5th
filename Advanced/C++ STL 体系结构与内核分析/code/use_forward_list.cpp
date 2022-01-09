#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> fl;
    int val;
    while(cin >> val){
        fl.push_front(val);
    }
    cout << *fl.begin() << endl;
}