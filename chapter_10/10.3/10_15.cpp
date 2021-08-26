#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    int a = 4, b;
    while(cin >> b){
        auto sum = [a](const int &val){
            return val + a;
        };
        cout << sum(b) << endl;
    }
}