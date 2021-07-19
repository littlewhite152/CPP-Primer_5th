#include<iostream>
using namespace std;
int main(){
    int fun();
    int a;
    cout << "请输入需要调用fun函数的次数：" << endl;
    cin >> a;
    for(int i = 1; i <= a; ++ i){
        cout << "第" << i << "次调用时返回值是" << fun() << endl;
    }
}
int fun(){
    static int a = 0;
    return a ++;
}