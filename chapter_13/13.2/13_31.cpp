#include<iostream>
#include<memory>
#include<vector>
#include<algorithm>
using namespace std;
class HasPtr{
    public:
        HasPtr(const string &s = string()):ps(new string(s)), i(0), use(new size_t(1)){}
        HasPtr(const HasPtr &p):
            ps(p.ps), i(p.i), use(p.use){++ *use;}
        HasPtr& operator=(const HasPtr&);
        bool operator<(HasPtr&);
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

bool HasPtr::operator<(HasPtr& rhs){
    cout << "调用了<运算符" << endl;
    print(*this);
    print(rhs);
    cout << endl;
    if(*(this -> ps) == *(rhs.ps))
        return ( (this -> i) < (rhs.i) ? true : false);
        // return *this;
    else
        return (*(this->ps) < *(rhs.ps) ? true : false);
}

HasPtr::~HasPtr(){
    if(-- *use == 0){
        delete ps;
        delete use;
    }
}

void swap(HasPtr &a, HasPtr &b){
    cout << "调用了swap函数:" << endl;
    using std::swap;
    swap(a.ps, b.ps);
    swap(a.i, b.i);
    swap(a.use, b.use);
}

void print(const HasPtr &a){
    cout << *(a.ps) << endl << a.i << endl << *(a.use) << endl;
}

int main(){
    HasPtr h1("abs"), h2("abc"), h3("absd"), h4("abs");
    vector<HasPtr> v;
    v.push_back(h1);
    v.push_back(h2);
    v.push_back(h3);
    v.push_back(h4);
    sort(v.begin(), v.end());
}