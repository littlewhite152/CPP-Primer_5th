#include<iostream>
#include<string>
#include<memory>
#include<vector>
using namespace std;
class HasPtr{
    public:
        int i;
        HasPtr(const string &s = string()):ps(new string(s)), i(index ++){
            cout << "调用了构造函数" << endl;
        }
        HasPtr(const HasPtr &temp){
            ps = temp.ps;
            i = index ++;
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
        static int index;
        string *ps;
        
};

int HasPtr::index = 0;

print(HasPtr &t){
    cout << *(t.ps) << endl;
    cout << t.i << endl;
}

// f(HasPtr s){
//     cout << s.i << endl;
// }

f(const HasPtr &s){
    cout << s.i << endl;
}
int main(){
    HasPtr h1("jjj");

    HasPtr h2 = h1;
    cout << h1.i << endl;
    cout << h2.i << endl;
    f(h1);
    f(h2);
}