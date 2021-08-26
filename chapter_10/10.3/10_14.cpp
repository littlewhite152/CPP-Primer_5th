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
    int a, b, sum;
    while(cin >> a >> b){
        auto sum = [](const int &a, const int &b){
            return a + b;
        };
        cout << sum(a, b) << endl; 
    }
}