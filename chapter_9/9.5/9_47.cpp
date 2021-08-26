#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
using namespace std;
int main(){
    string str = "ab2c3d7R4E6";
    string nums = "1234567890";
    string::size_type pos = 0;
    // while( (pos = str.find_first_of(nums, pos)) != string::npos){//在str中找nums各个元素在str中出现的下标值pos，如果找到进入while，如果没找到返回
    //     cout << str[pos] << endl;
    //     ++ pos;
    // }
    while( (pos = str.find_first_not_of(nums, pos)) == string::npos){//在str中找nums各个元素在str中出现的下标值pos，如果找到进入while，如果没找到返回
        cout << str[pos] << endl;
        ++ pos;
    }
}