#include<iostream>
#include<string>
using namespace std;
class Employee{
    static int index;
    private:
        string name;
        int no;
    public:
        Employee(){cout << "调用了默认的构造函数" << endl;};
        Employee(string n):name(n), no(index ++){cout << "调用了构造函数" << endl;};
        Employee(const Employee& e);
        Employee& operator= (const Employee& e);
        ~Employee();  
        friend print(Employee &t);
};

int Employee::index = 0;

Employee::Employee(const Employee& e){
    cout << "调用了拷贝构造函数" << endl;
    this -> name = e.name;
    this -> no = e.no;
    cout << index << endl;
    index ++;
}
Employee& Employee::operator= (const Employee& e){
    cout << "调用了拷贝赋值函数" << endl;
    this -> name = e.name;
    this -> no = e.no;
    cout << index << endl;
    index ++;
    return *this;
}
Employee::~Employee(){
    cout << "调用了析构函数" << endl;
    cout << index << endl;
    index --;
}
print(Employee &t){
    cout << t.name << endl << t.no << endl;
}
int main(){
    Employee e1("dfj");
    Employee e2 = e1;
    print(e1);
    print(e2);
}