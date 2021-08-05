#include<iostream>
#include<string>

using namespace std;
class A{
    public:
        A() = default;
        A(string j):i(j){};
        bool fun(A s){
            return s.i == this->i;
        }
        string i;
};

int main(){
    A a("fjkla;jf");
    a.fun(string("jk;gjoahgof"));//C++只能进行一步类类型转换，换成a.fun("jk;gjoahgof")要经历两次：""->string，string->A类对象
    cout << a.i;
}