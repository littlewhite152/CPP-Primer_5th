#include<iostream>
#include<string>
#include<memory>
#include<vector>
using namespace std;
class HasPtr{
    public:
        HasPtr(const string &s = string()):ps(new string(s)), i(0){
            cout << "调用了构造函数" << endl;
        }
        HasPtr(const HasPtr &temp){
            ps = temp.ps;
            i = temp.i;
            cout << "调用了引用的拷贝构造函数" << endl;
        }
        HasPtr& operator=(const HasPtr& temp){
            ps = temp.ps;
            i = temp.i;
            cout << "调用了拷贝赋值函数" << endl;
            return *this;
        }
        ~HasPtr(){
            cout << "调用了析构函数" << endl;
        }
        friend print(HasPtr &t);
    private:
        string *ps;
        int i;
};
print(HasPtr &t){
    cout << *(t.ps) << endl;
    cout << t.i << endl;
}
int main(){
    HasPtr h1("jjj");

    HasPtr h2 = h1;

    // shared_ptr<HasPtr> ptr(&h1);
    // print(*ptr);

    // vector<HasPtr> v{h1, h2, *ptr};
    vector<HasPtr> v{h1, h2};
}