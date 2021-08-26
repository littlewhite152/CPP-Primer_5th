#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    int val;
    vector<int> v = {1, 2, 5, 7, 8, 3, 2, 6, 2, 6};
    cout << "请输入需要查找的值：" << endl;
    cin >> val;
    cout << count(v.begin(), v.end(), val);
}