#include<iostream>
#include<string>
using namespace std;
class HasPtr{
    public:
        HasPtr(const string &s = string()):ps(new string(s)), i(0){}
        HasPtr(const HasPtr &temp){
            ps = temp.ps;
            i = temp.i;
            cout << "调用了拷贝构造函数" << endl;
        }
        HasPtr& operator=(const HasPtr& temp){
            ps = temp.ps;
            i = temp.i;
            cout << "调用了拷贝赋值函数" << endl;
            return *this;
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
    HasPtr h3("kkk");
    print(h3);
    h3 = h1;
    print(h2);
    print(h3);
}