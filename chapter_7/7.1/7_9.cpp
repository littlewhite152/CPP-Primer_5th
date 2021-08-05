#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    string address;
    string getname() const{//因为只是返回一个成员变量，所以设置为const
        return name;
    }
    string getaddress() const{//同上                                                                                                                                                                                                                                                                                               
        return address;
    }
    void editname(const string n);
    void editaddress(const string a);
};

void Person::editname(const string n){
    name = n;
}

void Person::editaddress(const string a){
    address = a;
}

int main(){
    istream &read(istream &cin, struct Person &p);
    ostream &print(ostream &cout, const struct Person &p);
    struct Person a;
    read(cin, a);
    print(cout, a);
}
istream & read(istream &cin, struct Person &p){
    cin >> p.name >>p.address;
    return cin;
}

ostream &print(ostream &cout, const struct Person &p){
    cout << "name:" << p.getname() << endl << "address:" << p.getaddress();
    return cout;
}