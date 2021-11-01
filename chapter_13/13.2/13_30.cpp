#include<iostream>
#include<memory>
using namespace std;
class HasPtr{
    public:
        HasPtr(const string &s = string()):ps(new string(s)), i(0), use(new size_t(1)){}
        HasPtr(const HasPtr &p):
            ps(p.ps), i(p.i), use(p.use){++ *use;}
        HasPtr& operator=(const HasPtr&);
        ~HasPtr();
        friend void swap(HasPtr &a, HasPtr &b);
        friend void print(const HasPtr &a);
    private:
        string* ps;
        int i;
        size_t* use;
};

HasPtr& HasPtr::operator=(const HasPtr& rhs){
    ++ *rhs.use;
    if(-- *rhs.use == 0){
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}

HasPtr::~HasPtr(){
    if(-- *use == 0){
        delete ps;
        delete use;
    }
}

void swap(HasPtr &a, HasPtr &b){
    cout << "调用了swap函数" << endl;
    using std::swap;
    swap(a.ps, b.ps);
    swap(a.i, b.i);
    swap(a.use, b.use);
}

void print(const HasPtr &a){
    cout << *(a.ps) << endl << a.i << endl << *(a.use) << endl;
}

int main(){
    HasPtr a("dfj"), b("sdj");
    print(a);
    print(b);
    swap(a, b);
    print(a);
    print(b);
}