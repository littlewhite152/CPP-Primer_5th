// #include<iostream>
// using namespace std;
// class NoDefault{
//     public:
//         NoDefault() = default;
//         // NoDefault(const string &){cout << "�������вεĹ��캯��"};
//         NoDefault(const string str = "456"):s(str){cout << "��������Ĭ�ϲ����Ĺ��캯��"<<endl;};
//         string s;
// };



// struct A{
//     NoDefault my_mem;
// };

// int main(){
//     // NoDefault a;
//     // cout << a.s << endl;
//     NoDefault b();//���õ����вλ�����Ĭ���βε�
//     cout << b.s << endl;
//     // NoDefault c("lll");
//     // cout << c.s << endl;
// }


#include<iostream>
#include<string>
using namespace std;
string str;
int i;

void fun(){
    int k[5];
    for(auto i : k)
        cout << i << endl;
    cout <<"kkk" <<"lll"<< endl;
}

int main(){
    int j;
    string s;

    cout << str << endl;
    cout << i << endl;
    fun();
    cout << j << endl;
    cout << s << endl;
}