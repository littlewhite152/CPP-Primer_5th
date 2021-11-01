#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {0,544,6435,1025,1024,23,5,6,6,};
    vector<string> c = {"pooh", "fjkf", "fjao", "pooh"};
    greater<int> fun1;
    not_equal_to<string> fun2;
    multiplies<int> fun3;
    
    // int count = count_if(v.begin(), v.end(), [fun1](const int num){
    //     return fun1(num, 1024);
    // });
    // cout << count << endl;

    // auto s = find_if(c.begin(), c.end(), [fun2](const string str){
    //     return fun2(str, "pooh");
    // });
    // cout << *s << endl;

    // for_each(v.begin(), v.end(), [fun3](int &num){
    //     num = fun3(num, 2);
    // });
    // for(auto i : v){
    //     cout << i << ' ';
    // }


    int count = count_if(v.begin(), v.end(), bind2nd(fun1, 1024));
    cout << count << endl;
}