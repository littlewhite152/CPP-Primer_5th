#include<iostream>
using namespace std;
int fun(int a){
    static int cnt = 0;
    int temp = a;
    ++ temp;
    ++ cnt;
    cout << "fun函数执行了" << cnt << "次。" << endl;
    cout << "每次执行fun函数时局部变量temp的值都是" << temp << endl;
    return a * 2;
}
int main(){
    int a;
    while(cin >> a){
        cout << fun(a) << endl;
    }
}