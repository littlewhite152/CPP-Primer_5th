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
    a.fun(string("jk;gjoahgof"));//C++ֻ�ܽ���һ��������ת��������a.fun("jk;gjoahgof")Ҫ�������Σ�""->string��string->A�����
    cout << a.i;
}