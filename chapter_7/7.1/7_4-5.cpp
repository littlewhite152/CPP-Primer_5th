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
    struct Person a;
    a.editname("jason");
    a.editaddress("chongqing university");
    cout << a.getname() << endl << a.getaddress() << endl;
}