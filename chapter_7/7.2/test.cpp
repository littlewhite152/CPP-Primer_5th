#include<iostream>
#include<string>
using namespace std;

struct Person{
    private:    
        string name;
        string address;
        mutable int cnt = 0;
        string getname() const{//鍥犱负鍙槸杩斿洖涓�涓垚鍛樺彉閲忥紝鎵�浠ヨ缃负const
            return name;
        }
        string getaddress() const{//鍚屼笂                                                                                                                                                                                                                                                                                               
            return address;
        }

    public:
        //构造函数
        Person() = default;
        Person(const string n, const string a = " "):name(n), address(a){};
        inline void editname(const string n);
        void editaddress(const string a);
        void sum() const{
            ++ cnt;
        }
        void showsum() const{
            cout << cnt;
        }
    friend istream & read(istream &cin, struct Person &p);
    friend ostream &print(ostream &cout, const struct Person &p);
};

void Person::editname(const string n){
    name = n;
}

void Person::editaddress(const string a){
    address = a;
}

istream & read(istream &cin, struct Person &p){
    cin >> p.name >>p.address;
    return cin;
}

ostream &print(ostream &cout, const struct Person &p){
    cout << "name:" << p.getname() << endl << "address:" << p.getaddress();
    return cout;
}

int main(){
    istream &read(istream &cin, struct Person &p);
    ostream &print(ostream &cout, const struct Person &p);
    struct Person a;
    read(cin, a);
    print(cout, a);
    a.sum();
    a.showsum();
}
