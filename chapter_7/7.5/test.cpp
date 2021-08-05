// #include<iostream>
// using namespace std;
// class NoDefault{
//     public:
//         NoDefault() = default;
//         // NoDefault(const string &){cout << "调用了有参的构造函数"};
//         NoDefault(const string str = "456"):s(str){cout << "调用了有默认参数的构造函数"<<endl;};
//         string s;
// };



// struct A{
//     NoDefault my_mem;
// };

// int main(){
//     // NoDefault a;
//     // cout << a.s << endl;
//     NoDefault b();//调用的是有参或者有默认形参的
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